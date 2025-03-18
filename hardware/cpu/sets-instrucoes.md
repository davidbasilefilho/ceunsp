# Sets de instruções da CPU


Os sets de instruções (ou conjuntos de instruções) da CPU definem as operações fundamentais que um processador pode executar. Eles formam a interface entre o hardware e o software, permitindo que programas controlem o funcionamento do processador.


## Tipos principais de arquiteturas de sets de instruções



### [CISC](CISC) (Complex Instruction Set Computer)


A arquitetura CISC foi desenvolvida com o objetivo de reduzir o "gap semântico" entre linguagens de alto nível e código de máquina, criando instruções mais complexas que executam múltiplas operações de baixo nível.


#### Características principais

- Instruções complexas que realizam múltiplas operações
- Grande variedade de modos de endereçamento
- Instruções com tamanhos variáveis
- Código mais compacto (menos instruções para mesma tarefa)
- Execução mais lenta por instrução
- Maior complexidade do hardware
  

#### Vantagens

- Simplifica o trabalho dos compiladores
- Requer menos linhas de código para implementar funções
- Reduz o tráfego de memória
  

#### Exemplos

- Intel x86/x86-64
- AMD64
- Motorola 68000


### [RISC](RISC) (Reduced Instruction Set Computer)


A arquitetura RISC surgiu como resposta à crescente complexidade dos designs CISC, focando na simplificação do conjunto de instruções para otimizar o desempenho e eficiência.


#### Características principais

- Instruções simples e atômicas
- Número limitado de modos de endereçamento
- Instruções com tamanho fixo
- Execução mais rápida por instrução
- Arquitetura load/store (apenas instruções load e store acessam a memória)
- Pipeline de instruções mais eficiente
  

#### Vantagens

- Melhor eficiência energética
- Permite clock mais alto
- Design de processador mais simples
- Paralelismo de instruções mais eficiente
- Facilita designs superescalares
  

#### Exemplos

- ARM
- RISC-V
- MIPS
- PowerPC
- SPARC


## Detalhes sobre instruções de CPU



### Tipos comuns de instruções


- **Transferência de dados**: MOV, LOAD, STORE
- **Aritméticas**: ADD, SUB, MUL, DIV
- **Lógicas**: AND, OR, XOR, NOT
- **Controle de fluxo**: JMP, CALL, RET, JZ (jump if zero)
- **Manipulação de bits**: SHL (shift left), SHR (shift right), ROL (rotate left)
- **Controle do sistema**: IN, OUT (I/O), HLT (halt), NOP (no operation)


### Modos de endereçamento


- **Imediato**: o operando é o valor em si
- **Direto**: o operando é o endereço da memória
- **Indireto**: o operando é um endereço que contém outro endereço
- **Registrador**: o operando está em um registrador
- **Indexado**: o endereço é calculado somando um valor base a um índice


## [ISA](ISA) (Instruction Set Architecture) modernos



### x86-64


Evolução do x86 original da Intel, é uma arquitetura CISC que domina o mercado de computadores pessoais e servidores. Oferece compatibilidade retroativa com código mais antigo, mas mantém alta complexidade.


#### Extensões importantes

- [MMX](MMX): instruções multimídia
- [SSE/AVX](SSE/AVX): instruções vetoriais de ponto flutuante
- [AES-NI](AES-NI): aceleração de criptografia
- Virtualização assistida por hardware


### ARM


Inicialmente uma arquitetura RISC pura, evoluiu para incluir algumas características mais complexas mantendo eficiência energética. Domina o mercado de dispositivos móveis.


#### Variantes importantes

- ARMv7-A: usada em smartphones mais antigos
- ARMv8-A: suporte a 64-bit (AArch64)
- ARM Cortex: família de designs para diferentes aplicações
- ARM Neon: extensões SIMD para processamento multimídia


### RISC-V


Uma ISA aberta e livre desenvolvida pela Universidade da Califórnia, Berkeley. Seu design modular permite implementações personalizadas para diferentes necessidades.


#### Características distintivas

- Arquitetura modular com extensões opcionais
- Design aberto sem royalties
- Suporte para 32, 64 e 128 bits
- Foco em simplicidade e elegância do design
- Crescente adoção na indústria e academia


## Tendências futuras em sets de instruções


- **Instruções específicas para IA e aprendizado de máquina**
- **Suporte a computação quântica**
- **Extensões para segurança e criptografia**
- **Convergência entre abordagens RISC e CISC**
- **Personalização de ISA para domínios específicos (DSAs)**
- **Instruções para eficiência energética**
