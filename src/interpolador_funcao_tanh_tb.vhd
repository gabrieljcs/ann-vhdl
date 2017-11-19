-------------------------------------------------------------------------------
-- Title      : Interpolador para a função tangente hiperbólica
-- Project    : 
-------------------------------------------------------------------------------
-- File       : interpolador_funcao_tanh.vhd
-- Author     : Giovani Baratto  <Giovani.Baratto@gmail.com.br>
-- Company    : UFSM - CT - DELC
-- Created    : 2017-11-08
-- Last update: 2017-11-09
-- Platform   : 
-- Standard   : VHDL'93/02
-------------------------------------------------------------------------------
-- Description: 
-------------------------------------------------------------------------------
-- Copyright (c) 2017 
-------------------------------------------------------------------------------
-- Revisions  :
-- Date        Version  Author  Description
-- 2017-11-08  1.0      gfbaratto       Created
-------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.math_real.all;
library ieee_proposed;
use ieee_proposed.fixed_pkg.all;
use ieee.std_logic_textio.all;
use std.textio.all;
------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------
entity interpolador_funcao_tanh_tb is
end entity interpolador_funcao_tanh_tb;
------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------
architecture simples of interpolador_funcao_tanh_tb is
  component interpolador_funcao_tanh is
    port (
      entrada : in  sfixed(15 downto -16);
      saida   : out sfixed(15 downto -16));
  end component interpolador_funcao_tanh;
  signal entrada : sfixed(15 downto -16);
  signal saida   : sfixed(15 downto -16);
  
  file arquivo_escrita : text;
begin
  UUT : interpolador_funcao_tanh
    port map (
      entrada => entrada,
      saida   => saida);

  process
    variable linha: line;
    variable x: real;
  begin
    file_open(arquivo_escrita, "tangh.dat", write_mode);
    x := -5.0;
    while(x <= 5.0) loop
      write(linha, x);
      write(linha, " ");
      write(linha, tanh(x));
      write(linha, " ");
      entrada <= to_sfixed(x, 15, -16);
      wait for 10 ns;
      write(linha, to_real(saida));
      writeline(arquivo_escrita, linha);
      x := x + 0.1;
    end loop;
    file_close(arquivo_escrita);
    wait;
  end process;

end architecture simples;
------------------------------------------------------------------------------------------------------------------------

