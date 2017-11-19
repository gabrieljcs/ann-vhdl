library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
library ieee_proposed;
use ieee_proposed.fixed_pkg.all;
use work.types.all;

entity neuron_tb is
end entity neuron_tb;

architecture tb of neuron_tb is

	constant half_period : time := 10 ns;

	constant inputs : integer := 2;

	signal clk      : std_logic                         := '0';
	signal rst      : std_logic                         := '0';
	signal start_i  : std_logic                         := '0';
	signal input_i  : sfixed_bus_array(inputs - 1 downto 0);
	signal weight_i : sfixed_bus_array(inputs downto 0) := (to_sfixed_a(10),
	                                                        to_sfixed_a(20),
	                                                        to_sfixed_a(30));
	signal output_o : sfixed_bus;
	signal done_o   : std_logic;

	signal input_r  : real_array(inputs - 1 downto 0);
	signal weight_r : real_array(inputs downto 0);
	signal output_r : real;

begin

	UUT : entity work.neuron(behavioral)
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			weight_i => weight_i,
			output_o => output_o,
			done_o   => done_o
		);

	clk <= not clk after half_period;

	input_r  <= to_real(input_i);
	weight_r <= to_real(weight_i);
	output_r <= to_real(output_o);

	input_i <= ((to_sfixed_a(0)), to_sfixed_a(20));
	start_i <= '0', '1' after 15 ns, '0' after 30 ns;

end architecture tb;
