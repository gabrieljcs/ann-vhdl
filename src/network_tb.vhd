library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.types.all;

entity network_tb is
end entity network_tb;

architecture n_xor of network_tb is
	
	constant inputs : integer := 2;
	constant half_period : time := 10 ns;
	
	signal clk      : std_logic := '0';
	signal rst      : std_logic;
	signal input_i  : std_logic_bus_array(inputs - 1 downto 0);
	signal start_i  : std_logic := '0';
	signal output_o : std_logic_bus;
	signal done_o   : std_logic;

begin

	network_inst : entity work.network(n_xor)
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			input_i  => input_i,
			start_i  => start_i,
			output_o => output_o,
			done_o   => done_o
		);
		
		clk <= not clk after half_period;
		
		input_i <= ((x"00"), (x"01"));
		start_i <= '0', '1' after 15 ns, '0' after 30 ns;
		
end architecture n_xor;
