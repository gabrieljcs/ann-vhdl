--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:26:43 11/14/2017
-- Design Name:   
-- Module Name:   /home/gabriel/ann-vhdl/src/test_tb.vhd
-- Project Name:  ann-vhdl
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: test
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;

library ieee_proposed;
use ieee_proposed.fixed_pkg.all;
 
ENTITY test_tb IS
END test_tb;
 
ARCHITECTURE behavior OF test_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT test
    PORT(
         clk : IN  std_logic;
         --input : IN  std_logic_vector(7 downto 0);
         --output : OUT  std_logic_vector(7 downto 0)
			output : out sfixed(15 downto -16)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   --signal input : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   --signal output : std_logic_vector(7 downto 0);
	signal output : sfixed(15 downto -16);
	signal output_R : real;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN

	output_R <= to_real(output);
 
	-- Instantiate the Unit Under Test (UUT)
   uut: test PORT MAP (
          clk => clk,
          --input => input,
          output => output
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
