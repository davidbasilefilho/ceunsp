# Organização de um computador

## CPU (Unidade Central de Processamento)

A CPU é o componente que executa instruções e processa dados.


### Componentes básicos

- **ULA**: Realiza cálculos matemáticos e operações lógicas
- **Unidade de Controle**: Coordena as operações
- **Registradores**: Memória interna ultrarrápida


### Ciclo básico

- Busca instrução
- Decodifica 
- Executa
- Armazena resultado


## RAM (Memória de Acesso Aleatório)

Memória temporária que armazena dados em uso.


### Características

- Rápida, mas volátil (perde dados quando desligada)
- Armazena programas em execução
- Funciona como "área de trabalho" da CPU


## Armazenamento permanente

Guarda dados mesmo quando o computador está desligado.


### Tipos comuns

- **HDD**: Discos magnéticos (mais lentos, maior capacidade)
- **SSD**: Memória flash (mais rápidos que HDDs)
- **Pendrive/cartão de memória**: Armazenamento portátil


## Comunicação entre componentes

### Barramento (Bus)

Canais de comunicação que conectam os componentes:
- Transfere dados entre CPU, RAM e outros dispositivos
- Sincroniza as operações


### Como funciona

1. CPU solicita dados (ex: arquivo ou programa)
2. Se estiver no armazenamento, é primeiro carregado na RAM
3. CPU processa os dados da RAM
4. Resultados são salvos na RAM e depois no armazenamento


## Hierarquia de memória

Organização do armazenamento por velocidade:

1. Registradores (mais rápidos, menor capacidade)
2. Cache 
3. RAM
4. SSD
5. HDD (mais lento, maior capacidade)


## Conjunto de instruções

### CISC (Complex Instruction Set Computer)

Arquitetura com instruções complexas e variadas:

- **Características**:
- Instruções de várias funções em um único comando
- Maior número de modos de endereçamento
- Código mais compacto (menos instruções para operação)
- Execução mais lenta por instrução
  
- **Vantagens**:
- Facilita o trabalho dos compiladores
- Requer menos linhas de código para executar tarefas
- Menor tráfego de memória

- **Exemplos**:
- Intel x86 (Processadores Intel e AMD para desktops)
- Motorola 68000
