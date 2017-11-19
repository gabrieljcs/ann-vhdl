----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:24:24 11/14/2017 
-- Design Name: 
-- Module Name:    test - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

library IEEE_PROPOSED;
use IEEE_PROPOSED.fixed_pkg.all;


entity test is
    Port ( clk : in STD_LOGIC;
			  --input : in  STD_LOGIC_VECTOR (7 downto 0);
           --output : out  STD_LOGIC_VECTOR (7 downto 0));
			  output : out sfixed(15 downto -16));
end test;

architecture Behavioral of test is
	signal output_s : sfixed (15 downto -16) := (others => '0');
begin
	process(clk) is
	begin
		output_s <= resize(output_s + 1, 15, -16);
	end process;
	
	output <= output_s;

end Behavioral;

