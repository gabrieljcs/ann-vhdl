library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.types.all;

entity network is
	generic(
		inputs : integer := 2           -- Network inputs
	);
	port(
		clk      : in  std_logic;
		rst      : in  std_logic;
		input_i  : in  std_logic_bus_array(inputs - 1 downto 0);
		start_i  : in  std_logic;
		output_o : out std_logic_bus;
		done_o   : out std_logic
	);
end entity network;

architecture RTL of network is
	signal output_n1 : std_logic_bus;
	signal output_n2 : std_logic_bus;
	signal input_n3  : std_logic_bus_array(inputs - 1 downto 0);
	signal done_n1   : std_logic;
	signal done_n2   : std_logic;
	signal start_n3  : std_logic;
	signal weight_n1 : std_logic_bus_array(inputs downto 0) := ((x"F1"), (x"0A"), (x"0A"));
	signal weight_n2 : std_logic_bus_array(inputs downto 0) := ((x"FB"), (x"0A"), (x"0A"));
	signal weight_n3 : std_logic_bus_array(inputs downto 0) := ((x"FB"), (x"EC"), (x"0A"));
begin

	-- First layer
	n1 : entity work.neuron
		generic map(
			inputs => 2
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			weight   => weight_n1,
			done_o   => done_n1,
			output_o => output_n1
		);

	n2 : entity work.neuron
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			weight   => weight_n2,
			done_o   => done_n2,
			output_o => output_n2
		);

	-- Second layer
	n3 : entity work.neuron
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_n3,
			input_i  => input_n3,
			weight   => weight_n3,
			done_o   => done_o,
			output_o => output_o
		);

	input_n3 <= ((output_n1), (output_n2));
	start_n3 <= done_n1 and done_n2;

end architecture RTL;
