library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.types.all;

entity neuron is
	generic(
		inputs : integer := 3           -- Number of inputs into the neuron
	);
	port(
		clk      : in  std_logic;
		rst      : in  std_logic;
		start_i  : in  std_logic;
		input_i  : in  std_logic_bus_array(inputs - 1 downto 0);
		weight_i : in  std_logic_bus_array(inputs downto 0); -- weight(0) is bias!
		done_o   : out std_logic;
		output_o : out std_logic_bus
	);
end entity neuron;

architecture behavioral of neuron is
	type state is (idle, reg_inputs, n_sum, weight_mult, act_func);
	signal current_state, next_state : state;
	signal input_s                   : std_logic_bus_array(inputs - 1 downto 0);
	signal weight_s                  : std_logic_bus_array(inputs downto 0);
	signal sum_s                     : std_logic_vector(width * 2 - 1 downto 0);
	signal mult_s                    : std_logic_vector(width * 2 - 1 downto 0);
	signal n                         : std_logic_bus := std_logic_vector(to_unsigned(inputs - 1, std_logic_bus'length));
	signal start_act_func_s          : std_logic     := '0';
	signal done_s                    : std_logic     := '0';
	signal output_s                  : std_logic_bus := x"00";
begin

	fsm_lower : process(clk, rst) is
	begin
		if rst = '1' then
			current_state    <= idle;
			output_s         <= (others => '0');
			done_s           <= '0';
			start_act_func_s <= '0';
		else
			current_state <= next_state;
		end if;
	end process fsm_lower;

	fsm_upper : process(current_state, input_i, input_s, mult_s, n, start_i, sum_s, weight_s, done_s) is
	begin
		case current_state is
			when idle =>
				if start_i = '1' then
					next_state <= reg_inputs;
				else
					next_state <= current_state;
				end if;

			when reg_inputs =>
				input_s <= input_i;
				sum_s   <= x"00" & weight_s(0); -- bias is already added to sum

				next_state <= n_sum;

			when n_sum =>
				n <= std_logic_vector(unsigned(n) - 1);

				next_state <= weight_mult;

			when weight_mult =>
				mult_s <= std_logic_vector(signed(input_s(to_integer(unsigned(n)))) * signed(weight_s(to_integer(unsigned(n)))));
				sum_s  <= std_logic_vector(signed(sum_s) + signed(mult_s));

				if n = x"FF" then
					next_state <= act_func;
				else
					next_state <= n_sum;
				end if;

			when act_func =>
				start_act_func_s <= '1';

				if done_s = '1' then
					next_state <= idle;
				else
					next_state <= current_state;
				end if;

		end case;
	end process fsm_upper;

	-- Activation function instantiation
	act_func_inst : entity work.act_func(threshold)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_act_func_s,
			input_i  => sum_s(width - 1 downto 0),
			output_o => output_s,
			done_o   => done_s
		);

	weight_s <= weight_i;
	done_o   <= done_s;
	output_o <= output_s;

end architecture behavioral;
