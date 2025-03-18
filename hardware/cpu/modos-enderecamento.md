# Modos de endereçamento

Os modos de endereçamento são as maneiras como o processador acessa os operandos das instruções. Eles definem como calcular o endereço de memória onde os dados necessários estão armazenados.


## Tipos de modos de endereçamento



### Imediato

- O operando está contido na própria instrução
- Muito rápido, pois não requer acesso à memória
- Exemplo: MOV R1, #50 (move o valor 50 diretamente para o registrador R1)
- Limitação: tamanho do operando é limitado pelo tamanho do campo de instrução


### Direto

- A instrução contém o endereço completo onde o operando está armazenado
- Requer apenas um acesso à memória
- Exemplo: MOV R1, [200] (move para R1 o conteúdo da posição de memória 200)
- Limitação: campo de endereço fixo limita o espaço de endereçamento


### Indireto

- A instrução contém o endereço onde está armazenado o endereço do operando
- Requer dois acessos à memória (um para ler o endereço, outro para o operando)
- Exemplo: MOV R1, [[200]] (lê o endereço contido na posição 200 e depois busca o operando nesse endereço)
- Vantagem: pode endereçar um espaço maior de memória


### Registrador

- O operando está em um registrador da CPU
- Muito rápido, não requer acesso à memória
- Exemplo: MOV R1, R2 (copia o conteúdo de R2 para R1)
- Vantagem: execução rápida e instruções compactas


### Registrador Indireto

- Um registrador contém o endereço de memória onde está o operando
- Requer um acesso à memória
- Exemplo: MOV R1, [R2] (R2 contém um endereço; move para R1 o conteúdo desse endereço)
- Muito útil para percorrer estruturas de dados e arrays


### Indexado

- O endereço é calculado somando um valor base a um índice
- Base pode ser um valor imediato ou registrador
- Índice geralmente é um registrador
- Exemplo: MOV R1, [R2 + R3] (endereço = conteúdo de R2 + conteúdo de R3)
- Ideal para acessar elementos de arrays e estruturas de dados


### Relativo ao PC (Program Counter)

- O endereço é calculado somando um deslocamento ao valor atual do PC
- Usado principalmente para instruções de desvio (jumps e branches)
- Exemplo: JMP PC+100 (desvia a execução para 100 bytes à frente)
- Vantagem: gera código de posição independente, facilitando realocação


### Base + Deslocamento

- Combina um registrador base com um deslocamento constante
- Exemplo: MOV R1, [R2 + 20] (endereço = conteúdo de R2 + 20)
- Útil para acessar campos em registros e estruturas de dados


## Impacto dos modos de endereçamento


- [Desempenho /](#desempenho-): Modos mais complexos geralmente exigem mais ciclos de clock
- [Densidade de código /](#densidade-de-código-): Certos modos permitem instruções mais compactas
- [Arquitetura do processador /](#arquitetura-do-processador-): RISC tende a ter menos modos de endereçamento comparado a CISC
- [Compiladores /](#compiladores-): Devem escolher o modo de endereçamento mais eficiente para cada contexto
- [Consumo de energia /](#consumo-de-energia-): Modos que exigem múltiplos acessos à memória consomem mais energia


