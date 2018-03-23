--------------------------------------------------------------------------------
--! @file
--! @brief Definition of activation functions
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

--! Applies the specified activation function to the input

--! This element takes as input a sfixed_bus (@see @file types.vhd) and outputs 
--! the activation function specified as the instantiated architecture.
entity act_func is
	port(
		input_i  : in  sfixed_bus;						--! Activation function input
		output_o : out sfixed_bus := (others => '0')	--! Activation function output
	);
end entity act_func;

-- @brief Threshold
-- @details McCulloch-Pitts "all-or-none" activation function (threshold).
architecture threshold of act_func is
begin
	output_o <= to_sfixed_a(1) when input_i >= 0 else to_sfixed_a(0);
end architecture threshold;

-- @brief Tanh
-- @details Linearly interpolated hyperbolic tangent (tanh).
-- @author Giovani Baratto <Giovani.Baratto@gmail.com.br>
architecture tanh of act_func is
	constant a    : sfixed_bus_array(0 to 31) := ( -- angular coefficients
		0  => to_sfixed_a(0.979675),    1 => to_sfixed_a(0.868794),
		2  => to_sfixed_a(0.692127),    3 => to_sfixed_a(0.505781),
		4  => to_sfixed_a(0.346758),    5 => to_sfixed_a(0.227458),
		6  => to_sfixed_a(0.144909),    7 => to_sfixed_a(0.0906082),
		8  => to_sfixed_a(0.0559941),   9 => to_sfixed_a(0.0343527),
		10 => to_sfixed_a(0.0209817),  11 => to_sfixed_a(0.0127801),
		12 => to_sfixed_a(0.00777153), 13 => to_sfixed_a(0.00472105),
		14 => to_sfixed_a(0.00286618), 15 => to_sfixed_a(0.00173943),
		16 => to_sfixed_a(0.00173943), 17 => to_sfixed_a(0.00286618),
		18 => to_sfixed_a(0.00472105), 19 => to_sfixed_a(0.00777153),
		20 => to_sfixed_a(0.0127801),  21 => to_sfixed_a(0.0209817),
		22 => to_sfixed_a(0.0343527),  23 => to_sfixed_a(0.0559941),
		24 => to_sfixed_a(0.0906082),  25 => to_sfixed_a(0.144909),
		26 => to_sfixed_a(0.227458),   27 => to_sfixed_a(0.346758),
		28 => to_sfixed_a(0.505781),   29 => to_sfixed_a(0.692127),
		30 => to_sfixed_a(0.868794),   31 => to_sfixed_a(0.979675));

	constant b    : sfixed_bus_array(0 to 31) := ( -- linear coefficients
		0  => to_sfixed_a(0),           1 => to_sfixed_a(0.0277202),
		2  => to_sfixed_a(0.116054),    3 => to_sfixed_a(0.255813),
		4  => to_sfixed_a(0.414836),    5 => to_sfixed_a(0.563961),
		6  => to_sfixed_a(0.687785),    7 => to_sfixed_a(0.782811),
		8  => to_sfixed_a(0.852039),    9 => to_sfixed_a(0.900732),
		10 => to_sfixed_a(0.93416),    11 => to_sfixed_a(0.956714),
		12 => to_sfixed_a(0.97174),    13 => to_sfixed_a(0.981654),
		14 => to_sfixed_a(0.988146),   15 => to_sfixed_a(0.992372),
		16 => to_sfixed_a(-0.992372),  17 => to_sfixed_a(-0.988146),
		18 => to_sfixed_a(-0.981654),  19 => to_sfixed_a(-0.97174),
		20 => to_sfixed_a(-0.956714),  21 => to_sfixed_a(-0.93416),
		22 => to_sfixed_a(-0.900732),  23 => to_sfixed_a(-0.852039),
		24 => to_sfixed_a(-0.782811),  25 => to_sfixed_a(-0.687785),
		26 => to_sfixed_a(-0.563961),  27 => to_sfixed_a(-0.414836),
		28 => to_sfixed_a(-0.255813),  29 => to_sfixed_a(-0.116054),
		30 => to_sfixed_a(-0.0277202), 31 => to_sfixed_a(0)
	);
	signal mult_s : sfixed(2*int - 1 downto -2*frac) := (others => '0');
	signal sum_s  : sfixed(int downto -frac)         := (others => '0');
	signal index  : integer                          := 0;
begin
	index    <= to_integer(unsigned(input_i(2 downto -2))); -- index of a & b

	mult_s   <= a(index) * input_i;     -- a[i] * input

	sum_s    <= resize(mult_s, int - 1, -frac) + b(index); -- a[i] * input + 
														   -- b[i]

	output_o <= to_sfixed_a(1)	when input_i >  3.5 else
				to_sfixed_a(-1) when input_i < -3.5 else
				resize(sum_s, int - 1, -frac); -- output = a[i] * input + b[i]

end architecture tanh;