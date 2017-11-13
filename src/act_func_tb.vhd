library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.types.all;

entity act_func_tb is
end entity act_func_tb;

architecture tb of act_func_tb is

	constant half_period : time := 10 ns;

	signal clk      : std_logic     := '0';
	signal rst      : std_logic     := '0';
	signal start_i  : std_logic     := '0';
	signal input_i  : std_logic_bus := (others => '0');
	signal output_o : std_logic_bus;
	signal done_o   : std_logic;

begin

	DUU : entity work.act_func(threshold)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			output_o => output_o,
			done_o   => done_o
		);

	clk <= not clk after half_period;
	--    __    __    __    __    __    __    __    __
	-- __|  |__|  |__|  |__|  |__|  |__|  |__|  |__|  |
	--      ______        ______
	-- ____|      |______|      |_____|
	--        ______        ______
	-- ______|      |______|      |_____|
	-- 0    15     30     45      60   75

	input_i <= x"00", x"AA" after 10 ns, x"FF" after 40 ns, x"FD" after 70 ns, x"5A" after 100 ns;
	start_i <= '0', '1' after 15 ns, '0' after 35 ns, '1' after 45 ns, '0' after 65 ns, '1' after 75 ns, '0' after 95 ns, '1' after 105 ns, '0' after 125 ns, '1' after 135 ns, '0' after 155 ns;

end architecture tb;
