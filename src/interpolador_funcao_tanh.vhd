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
-- Description: Este interpolador linear calcula a tangente hiperbólica de
--              entrada. Os valores de entrada e de saída estão no formato
--              Q16.16, ou seja, formato em ponto fixo com 16 bits na parte
--              inteira e 16 bits na parte fracionária. Os coeficientes angular
--              a e linear b da interpolação, são armazenados dois vetores de
--              constantes. O valor da entrada pode estar entre -3.5 a 3.5,
--              aproximadamente.
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
library ieee_proposed;
use ieee_proposed.fixed_pkg.all;
------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------
entity interpolador_funcao_tanh is
  port(entrada : in  sfixed(15 downto -16);   -- argumento da função 
       saida   : out sfixed(15 downto -16));  -- o valor da tangente hiperbólica do argumento entrada
end entity interpolador_funcao_tanh;
------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------
architecture simples of interpolador_funcao_tanh is
  type array_sfixed is array(integer range<>) of sfixed(15 downto -16);
  constant a : array_sfixed(0 to 31) := (                       -- coeficientes angulares
    0  => to_sfixed(0.979675, 15, -16), 1 => to_sfixed(0.868794, 15, -16),
    2  => to_sfixed(0.692127, 15, -16), 3 => to_sfixed(0.505781, 15, -16),
    4  => to_sfixed(0.346758, 15, -16), 5 => to_sfixed(0.227458, 15, -16),
    6  => to_sfixed(0.144909, 15, -16), 7 => to_sfixed(0.0906082, 15, -16),
    8  => to_sfixed(0.0559941, 15, -16), 9 => to_sfixed(0.0343527, 15, -16),
    10 => to_sfixed(0.0209817, 15, -16), 11 => to_sfixed(0.0127801, 15, -16),
    12 => to_sfixed(0.00777153, 15, -16), 13 => to_sfixed(0.00472105, 15, -16),
    14 => to_sfixed(0.00286618, 15, -16), 15 => to_sfixed(0.00173943, 15, -16),
    16 => to_sfixed(0.00173943, 15, -16), 17 => to_sfixed(0.00286618, 15, -16),
    18 => to_sfixed(0.00472105, 15, -16), 19 => to_sfixed(0.00777153, 15, -16),
    20 => to_sfixed(0.0127801, 15, -16), 21 => to_sfixed(0.0209817, 15, -16),
    22 => to_sfixed(0.0343527, 15, -16), 23 => to_sfixed(0.0559941, 15, -16),
    24 => to_sfixed(0.0906082, 15, -16), 25 => to_sfixed(0.144909, 15, -16),
    26 => to_sfixed(0.227458, 15, -16), 27 => to_sfixed(0.346758, 15, -16),
    28 => to_sfixed(0.505781, 15, -16), 29 => to_sfixed(0.692127, 15, -16),
    30 => to_sfixed(0.868794, 15, -16), 31 => to_sfixed(0.979675, 15, -16)
    );
  constant b : array_sfixed(0 to 31) := (                       -- coeficientes lineares
    0  => to_sfixed(0, 15, -16), 1 => to_sfixed(0.0277202, 15, -16),
    2  => to_sfixed(0.116054, 15, -16), 3 => to_sfixed(0.255813, 15, -16),
    4  => to_sfixed(0.414836, 15, -16), 5 => to_sfixed(0.563961, 15, -16),
    6  => to_sfixed(0.687785, 15, -16), 7 => to_sfixed(0.782811, 15, -16),
    8  => to_sfixed(0.852039, 15, -16), 9 => to_sfixed(0.900732, 15, -16),
    10 => to_sfixed(0.93416, 15, -16), 11 => to_sfixed(0.956714, 15, -16),
    12 => to_sfixed(0.97174, 15, -16), 13 => to_sfixed(0.981654, 15, -16),
    14 => to_sfixed(0.988146, 15, -16), 15 => to_sfixed(0.992372, 15, -16),
    16 => to_sfixed(-0.992372, 15, -16), 17 => to_sfixed(-0.988146, 15, -16),
    18 => to_sfixed(-0.981654, 15, -16), 19 => to_sfixed(-0.97174, 15, -16),
    20 => to_sfixed(-0.956714, 15, -16), 21 => to_sfixed(-0.93416, 15, -16),
    22 => to_sfixed(-0.900732, 15, -16), 23 => to_sfixed(-0.852039, 15, -16),
    24 => to_sfixed(-0.782811, 15, -16), 25 => to_sfixed(-0.687785, 15, -16),
    26 => to_sfixed(-0.563961, 15, -16), 27 => to_sfixed(-0.414836, 15, -16),
    28 => to_sfixed(-0.255813, 15, -16), 29 => to_sfixed(-0.116054, 15, -16),
    30 => to_sfixed(-0.0277202, 15, -16), 31 => to_sfixed(0, 15, -16)
    );
  signal multiplicacao : sfixed(31 downto -32);
  signal soma          : sfixed(16 downto -16);
  signal indice        : integer := 0;
begin
  --    calculamos a interpolação com a fórmula saida = a[i] * entrada + b[i].
  --    para o índice i usamos 5 bits da entrada (3 bits menos significativos
  --    da parte inteira e os 2 bits mais significativos da parte fracionária.
  indice        <= to_integer(unsigned(entrada(2 downto -2)));  -- encontramos o índice dos coeficientes a e b
  multiplicacao <= a(indice) * entrada;                         -- a[i] * entrada
  soma          <= resize(multiplicacao, 15, -16) + b(indice);  -- a[i] * entrada + b[i]
  saida         <= resize(soma, 15, -16);                       -- atualizamos a saída do interpolador
end architecture simples;
------------------------------------------------------------------------------------------------------------------------

