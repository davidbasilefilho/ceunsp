# Operações da ULA

A Unidade Lógica e Aritmética (ULA) é um componente fundamental do processador responsável por realizar operações matemáticas e lógicas. A ULA é considerada o "cérebro" da CPU.


## Operações Aritméticas

As operações aritméticas são aquelas que envolvem cálculos numéricos básicos:
- Adição: Soma de dois valores
- Subtração: Diferença entre dois valores
- Multiplicação: Produto de dois valores 
- Divisão: Quociente entre dois valores
- Incremento: Adicionar 1 a um valor
- Decremento: Subtrair 1 de um valor


## Operações Lógicas

As operações lógicas trabalham com valores booleanos (0 e 1) e são fundamentais para tomadas de decisão:
- AND (E): Retorna 1 apenas se ambas as entradas forem 1
- OR (OU): Retorna 1 se pelo menos uma das entradas for 1
- NOT (NÃO): Inverte o valor da entrada (0 vira 1, 1 vira 0)
- XOR (OU exclusivo): Retorna 1 se as entradas forem diferentes
- NAND (NÃO-E): Inverso da operação AND
- NOR (NÃO-OU): Inverso da operação OR


## Operações de Deslocamento e Rotação

Operações que manipulam bits de um número:
- Deslocamento à direita (shift right): Move bits para a direita
- Deslocamento à esquerda (shift left): Move bits para a esquerda
- Rotação à direita: Move bits para a direita, com o bit mais à direita voltando para a posição mais à esquerda
- Rotação à esquerda: Move bits para a esquerda, com o bit mais à esquerda voltando para a posição mais à direita


## Operações de Comparação

A ULA também realiza comparações entre valores:
- Igual a (=)
- Diferente de (≠)
- Maior que (>)
- Menor que ()
- Maior ou igual a (≥)
- Menor ou igual a (≤)


## Flags (Sinalizadores)

Durante as operações, a ULA pode configurar sinalizadores que indicam determinadas condições:
- Zero (Z): Ativado quando o resultado é zero
- Negativo (N): Ativado quando o resultado é negativo
- Transporte/Carry (C): Ativado quando ocorre um estouro na operação
- Estouro/Overflow (V): Ativado quando ocorre um estouro em operações com números com sinal
- Paridade (P): Indica se o número de bits 1 no resultado é par ou ímpar


## Importância na Arquitetura

A ULA é essencial para todas as operações computacionais, pois:
- Executa as operações especificadas pelo conjunto de instruções
- Permite a tomada de decisões através dos resultados das comparações
- Trabalha diretamente com registradores da CPU
- Sua velocidade e eficiência impactam diretamente o desempenho do processador
