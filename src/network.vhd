--------------------------------------------------------------------------------
--! @file
--! @brief Neural network instantiation
--! @author Gabriel de Jesus Coelho da Silva
--------------------------------------------------------------------------------

--! Use standard library with logic elements
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

--! Use proposed library with fixed point definition
library ieee_proposed;
use ieee_proposed.fixed_pkg.all;

--! Use custom library for ease of use
use work.types.all;

entity network is
	generic(
		inputs  : integer := 2;         --! Network inputs
		outputs : integer := 1          --! Network outputs
	);
	port(
		clk      : in  std_logic;	--! Clock input
		rst      : in  std_logic;	--! Reset output
		start_i  : in  std_logic;	--! Start input, indicates to start the calculation
		input_i  : in  sfixed_bus_array(inputs - 1 downto 0); --! Network input
		output_o : out sfixed_bus_array(outputs - 1 downto 0) := (others => (others => '0')); --! Network output
		done_o   : out std_logic                              := '0' --! Done output, indicates completion
	);
end entity network;

architecture n_xor of network is
	signal output_n1 : sfixed_bus;
	signal output_n2 : sfixed_bus;
	signal done_n1   : std_logic;
	signal done_n2   : std_logic;
	signal start_n3  : std_logic;
	signal output_s  : sfixed_bus_array(outputs - 1 downto 0);
	signal input_n3  : sfixed_bus_array(inputs - 1 downto 0);
	constant weight_n1 : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(-1.5) ),
	                                                           ( to_sfixed_a(1) ),
	                                                           ( to_sfixed_a(1) ));
	constant weight_n2 : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(-0.5) ),
	                                                           ( to_sfixed_a(1) ),
	                                                           ( to_sfixed_a(1) ));
	constant weight_n3 : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(-0.5) ),
	                                                           ( to_sfixed_a(-2) ),
	                                                           ( to_sfixed_a(1) ));
begin

	-- First layer

	n1 : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			weight_i => weight_n1,
			output_o => output_n1,
			done_o   => done_n1
		);

	n2 : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_i,
			input_i  => input_i,
			weight_i => weight_n2,
			output_o => output_n2,
			done_o   => done_n2
		);

	-- Second layer
	n3 : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_n3,
			input_i  => input_n3,
			weight_i => weight_n3,
			output_o => output_s(0),
			done_o   => done_o
		);

	input_n3 <= ((output_n1), (output_n2));
	start_n3 <= done_n1 and done_n2;
	output_o <= output_s;

end architecture n_xor;
