library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

-- std_logic_vector array type
package types is
	-- Generic inside package only supported by VHDL 2008
	--generic(
	--	inputs : integer := 3;
	--	width  : integer := 8
	--);
	constant width  : integer := 8;
	subtype std_logic_bus is std_logic_vector(width - 1 downto 0);
	type std_logic_bus_array is array(integer range<>) of std_logic_bus;
end package types;