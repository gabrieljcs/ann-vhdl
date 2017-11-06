library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.types.all;

entity network_tb is
	generic(
		inputs : integer := 2
	);
end entity network_tb;

architecture RTL of network_tb is
	signal clk      : std_logic;
	constant period : time := 10 ns;
	signal rst      : std_logic;
	signal input_i  : std_logic_bus_array(inputs - 1 downto 0);
	signal start_i  : std_logic;
	signal output_o : std_logic_bus;
	signal done_o   : std_logic;

begin
	clock_driver : process
	begin
		clk <= '0';
		wait for period / 2;
		clk <= '1';
		wait for period / 2;
	end process clock_driver;

	network_inst : entity work.network
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
		
		input_i <= ((x"00"), (x"01"));
		start_i <= '0', '1' after 10 ns, '0' after 30 ns;
		
end architecture RTL;
