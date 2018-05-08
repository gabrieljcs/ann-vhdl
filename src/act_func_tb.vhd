library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

use ieee.std_logic_textio.all;
use std.textio.all;

use work.types.all;

library ieee_proposed;
use ieee_proposed.fixed_pkg.all;

entity act_func_tb is
end entity act_func_tb;

architecture tb of act_func_tb is

	constant half_period : time := 10 ns;

	signal clk      : std_logic := '0';
	signal input_i  : sfixed_bus := to_sfixed_a(0);
	signal output_o : sfixed_bus;

	signal input_r  : real;
	signal output_r : real;

	file file_o       : text;

begin

	UUT : entity work.act_func(tanh)
		port map(
			clk      => clk,
			input_i  => input_i,
			output_o => output_o
		);

	clk <= not clk after half_period;

	input_r  <= to_real(input_i);
	output_r <= to_real(output_o);

	--    __    __    __    __    __    __    __    __
	-- __|  |__|  |__|  |__|  |__|  |__|  |__|  |__|  |
	--      ______        ______
	-- ____|      |______|      |_____|
	--        ______        ______
	-- ______|      |______|      |_____|
	-- 0    15     30     45      60   75

	--input_i <= to_sfixed_a(0), to_sfixed_a(10) after 5 ns, to_sfixed_a(-3) after 35 ns, to_sfixed_a(-10) after 65 ns, to_sfixed_a(20) after 95 ns;
	--start_i <= '0', '1' after 15 ns, '0' after 35 ns, '1' after 45 ns, '0' after 65 ns, '1' after 75 ns, '0' after 95 ns, '1' after 105 ns, '0' after 125 ns, '1' after 135 ns, '0' after 155 ns;

	process
		variable to_write : line;
		variable x        : real;
	begin
		file_open(file_o, "tanh-vhdl.dat", write_mode);
		x := -5.0;
		while (x <= 5.0) loop
			write(to_write, x);
			write(to_write, " ");
			input_i <= to_sfixed_a(x);
			wait for half_period * 3;
			write(to_write, output_r);
			writeline(file_o, to_write);
			x := x + 0.1;
		end loop;
		file_close(file_o);
		wait;
	end process;
	
end architecture tb;
