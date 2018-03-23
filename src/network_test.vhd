library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
library ieee_proposed;
use ieee_proposed.fixed_pkg.all;
use work.types.all;

entity network_test is
	generic(
		inputs  : integer := 2;         -- Network inputs
		outputs : integer := 1          -- Network outputs
	);
	port(
		clk      : in  std_logic;
		rst      : in  std_logic;
		start_i  : in  std_logic;
		input_i  : in  sfixed_bus_array(inputs - 1 downto 0);
		output_o : out sfixed_bus_array(outputs - 1 downto 0) := (others => (others => '0'));
		done_o   : out std_logic                              := '0'
	);
end entity network_test;

architecture n_test_2_4_1 of network_test is
	signal output_n1   : sfixed_bus;
	signal output_n2   : sfixed_bus;
	signal done_n1     : std_logic;
	signal done_n2     : std_logic;
	signal done_n1_h   : std_logic;
	signal done_n2_h   : std_logic;
	signal done_n3_h   : std_logic;
	signal done_n4_h   : std_logic;
	signal start_h     : std_logic;
	signal start_o_l   : std_logic;
	signal output_s    : sfixed_bus_array(outputs - 1 downto 0);
	signal input_o_l   : sfixed_bus_array(3 downto 0);
	constant weight_n1   : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(1) ),
	                                                             ( to_sfixed_a(2) ),
	                                                             ( to_sfixed_a(2) ));
	constant weight_n2   : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(-0.5) ),
	                                                             ( to_sfixed_a(1) ),
	                                                             ( to_sfixed_a(1) ));
	constant weight_n1_h : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(-0.5) ),
	                                                             ( to_sfixed_a(-1) ),
	                                                             ( to_sfixed_a(1) ));
	constant weight_n2_h : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(-1.5) ),
	                                                             ( to_sfixed_a(1) ),
	                                                             ( to_sfixed_a(2.5) ));
	constant weight_n3_h : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(1) ),
	                                                            ( to_sfixed_a(-1) ),
	                                                            ( to_sfixed_a(0.5) ));
	constant weight_n4_h : sfixed_bus_array(inputs downto 0) := (( to_sfixed_a(2) ),
	                                                            ( to_sfixed_a(-2) ),
	                                                            ( to_sfixed_a(1.5) ));
	constant weight_n_o  : sfixed_bus_array(4 downto 0)      := (( to_sfixed_a(1) ),
	                                                            ( to_sfixed_a(2) ),
	                                                            ( to_sfixed_a(1.5) ),
	                                                            ( to_sfixed_a(-1.5) ),																				  
	                                                            ( to_sfixed_a(-1) ));

	signal input_h     : sfixed_bus_array(inputs - 1 downto 0);
	signal output_n1_h : sfixed_bus;
	signal output_n2_h : sfixed_bus;
	signal output_n3_h : sfixed_bus;
	signal output_n4_h : sfixed_bus;
begin

	-- First layer
	n1 : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => start_o_l,
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
			rst      => start_o_l,
			start_i  => start_i,
			input_i  => input_i,
			weight_i => weight_n2,
			output_o => output_n2,
			done_o   => done_n2
		);

	-- Hidden layer
	n1_h : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_h,
			input_i  => input_h,
			weight_i => weight_n1_h,
			output_o => output_n1_h,
			done_o   => done_n1_h
		);

	n2_h : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_h,
			input_i  => input_h,
			weight_i => weight_n2_h,
			output_o => output_n2_h,
			done_o   => done_n2_h
		);

	n3_h : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_h,
			input_i  => input_h,
			weight_i => weight_n3_h,
			output_o => output_n3_h,
			done_o   => done_n3_h
		);

	n4_h : entity work.neuron
		generic map(
			inputs => inputs
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_h,
			input_i  => input_h,
			weight_i => weight_n4_h,
			output_o => output_n4_h,
			done_o   => done_n4_h
		);

	-- Output layer
	n_o : entity work.neuron
		generic map(
			inputs => 4
		)
		port map(
			clk      => clk,
			rst      => rst,
			start_i  => start_o_l,
			input_i  => input_o_l,
			weight_i => weight_n_o,
			output_o => output_s(0),
			done_o   => done_o
		);

	start_h <= done_n1 and done_n2;
	input_h <= ((output_n1), (output_n2));

	start_o_l <= done_n1_h and done_n2_h and done_n3_h and done_n4_h;
	input_o_l <= ((output_n1_h), (output_n2_h), (output_n3_h), (output_n4_h));

	output_o <= output_s;

end architecture n_test_2_4_1;
