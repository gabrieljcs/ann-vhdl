library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.math_real.all; -- tanh(x) etc
use work.types.all;

entity network_test_tb is
end entity network_test_tb;

architecture n_test_2_4_1 of network_test_tb is
	
	constant inputs : integer := 2;
	constant outputs : integer := 1;
	
	constant half_period : time := 10 ns;
	
	signal clk      : std_logic := '0';
	signal rst      : std_logic := '0';
	signal input_i  : sfixed_bus_array(inputs - 1 downto 0);
	signal start_i  : std_logic := '0';
	signal output_o : sfixed_bus_array(outputs - 1 downto 0);
	signal done_o   : std_logic;
	signal input_r  : real_array(inputs - 1 downto 0);
	signal output_r : real_array(outputs - 1 downto 0);
	signal output_e : real_array(outputs - 1 downto 0);

begin

	network_inst : entity work.network_test(n_test_2_4_1)
		generic map(
			inputs  => inputs,
			outputs => outputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			output_o => output_o,
			done_o   => done_o
		);
		
		clk <= not clk after half_period;
		
		start_stimuli : process is
		begin
			start_i <= '0', '1' after 15 ns, '0' after 30 ns;
			wait until done_o = '1';
		end process start_stimuli;
			
		
		input_stimuli : process is
		begin
			input_i <= (( to_sfixed_a(0.7) ), ( to_sfixed_a(0.7) ));
			wait until done_o = '1';
			input_i <= (( to_sfixed_a(0) ), ( to_sfixed_a(0) ));
			wait until done_o = '1';
			input_i <= (( to_sfixed_a(0) ), ( to_sfixed_a(1) ));
			wait until done_o = '1';
			input_i <= (( to_sfixed_a(1) ), ( to_sfixed_a(0) ));
			wait until done_o = '1';
			input_i <= (( to_sfixed_a(1) ), ( to_sfixed_a(1) ));
			wait until done_o = '1';
		end process input_stimuli;
		
		input_r <= to_real(input_i);
		output_r <= to_real(output_o);
		
		-- output_e <= 
		
end architecture n_test_2_4_1;
