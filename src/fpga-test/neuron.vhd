library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
--library ieee_proposed;
use ieee.fixed_pkg.all;
use work.types.all;

entity neuron is
	generic(
		inputs : integer := 3           -- Number of inputs into the neuron

	);
	port(
		clk      : in  std_logic;
		rst      : in  std_logic;
		start_i  : in  std_logic;
		input_i  : in  sfixed_bus_array(inputs - 1 downto 0);
		weight_i : in  sfixed_bus_array(inputs downto 0); -- bias included here
		output_o : out sfixed_bus := (others => '0');
		done_o   : out std_logic  := '0'
	);
end entity neuron;

architecture behavioral of neuron is
	type state is (idle, reg_inputs, mult, sum, act_func);
	signal current_state, next_state : state;

	signal input_s        : sfixed_bus_array(inputs - 1 downto 0) := (others => (others => '0'));
	signal sum_s          : sfixed(int downto -frac)              := (others => '0');
	signal mult_s         : sfixed(2*int - 1 downto -2*frac)      := (others => '0');
	signal index          : integer                               := inputs;
	signal weight_s       : sfixed_bus_array(inputs downto 0);
	signal output_s       : sfixed_bus                            := (others => '0');
	signal act_func_input : sfixed_bus                            := resize(sum_s, int - 1, -frac);
	signal done_s         : std_logic                             := '0';
begin

	fsm_lower : process(clk, rst) is
	begin
		if rst = '1' then
			current_state <= idle;
			-- done_s <= '0';
		elsif rising_edge(clk) then
			current_state <= next_state;
		end if;
	end process fsm_lower;

	fsm_upper : process(current_state, input_i, input_s, start_i, weight_s) is -- do NOT include "index", "sum_s" or "mult_s" here
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
				sum_s   <= resize(weight_s(inputs), int, -frac); -- bias is already added to sum
				mult_s  <= (others => '0');
				index   <= inputs;

				next_state <= mult;

			when mult =>
				if index = 0 then
					next_state <= act_func;
				else
					mult_s     <= input_s(index - 1)*weight_s(index - 1);
					next_state <= sum;
				end if;

			when sum =>
				index      <= index - 1;
				sum_s      <= resize(sum_s, int - 1, -frac) + resize(mult_s, int - 1, -frac);
				next_state <= mult;

			when act_func =>
				done_s     <= '1';
				next_state <= idle;

		end case;

	end process fsm_upper;

	-- Activation function instantiation
	act_func_inst : entity work.act_func(tanh)
		port map(
			input_i  => act_func_input,
			output_o => output_s
		);

	done_o         <= done_s;
	output_o       <= output_s;
	weight_s       <= weight_i;
	act_func_input <= resize(sum_s, int - 1, -frac);

end architecture behavioral;
