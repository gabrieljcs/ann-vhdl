library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.types.all;

entity neuron_tb is
end entity neuron_tb;

architecture tb of neuron_tb is

	constant half_period : time := 10 ns;

	constant inputs : integer := 2;

	signal clk      : std_logic                            := '0';
	signal rst      : std_logic                            := '0';
	signal start_i  : std_logic                            := '0';
	signal input_i  : std_logic_bus_array(inputs - 1 downto 0);
	signal weight_i : std_logic_bus_array(inputs downto 0) := ((x"0A"), (x"AC"), (x"F0"));
	signal done_o   : std_logic;
	signal output_o : std_logic_bus;
begin

	DUU : entity work.neuron(behavioral)
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			weight_i => weight_i,
			done_o   => done_o,
			output_o => output_o
		);

	clk <= not clk after half_period;

	input_i <= ((x"0A"), (x"FC"));
	start_i <= '0', '1' after 15 ns, '0' after 30 ns;

end architecture tb;
