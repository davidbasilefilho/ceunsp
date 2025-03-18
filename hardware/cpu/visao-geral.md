# Visão geral da CPU e seu funcionamento

A Unidade Central de Processamento (CPU) é o componente principal de um computador, responsável por executar instruções e processar dados.


## Componentes principais

- **Unidade de Controle (UC)**: Coordena todas as operações da CPU, gerenciando o fluxo de dados e controlando a sequência de execução de instruções.
- **Unidade Lógica e Aritmética (ULA/ALU)**: Realiza operações matemáticas (adição, subtração, multiplicação) e lógicas (AND, OR, NOT).
- **Registradores**: Memórias pequenas e ultrarrápidas dentro da CPU que armazenam dados temporários e instruções em processamento.
- **Cache**: Memória de alta velocidade que armazena dados frequentemente acessados para reduzir o tempo de acesso à memória principal.
- **Barramento interno**: Conexões que permitem a comunicação entre os componentes internos da CPU.


## Ciclo básico de instruções

1. **Fetch**: Busca da instrução na memória principal
2. **Decode**: Decodificação da instrução para determinar qual operação realizar
3. **Execute**: Execução da operação especificada
4. **Store**: Armazenamento dos resultados em registradores ou memória


## Arquiteturas modernas

- **Múltiplos núcleos**: CPUs com vários núcleos de processamento independentes
- **Pipeline**: Técnica que permite iniciar a execução de uma nova instrução antes que a anterior termine
- **Execução fora de ordem**: Capacidade de executar instruções em ordem diferente da programada para otimizar o desempenho
- **Previsão de desvios**: Mecanismo para prever o resultado de instruções condicionais


## Desempenho e métricas

- **Clock**: Frequência de operação medida em Hertz (GHz)
- **IPC (Instruções Por Ciclo)**: Quantidade média de instruções executadas por ciclo de clock
- **Throughput**: Volume total de trabalho realizado em um determinado período
- **Latência**: Tempo de resposta para completar uma operação específica


## Interação com o sistema

- Comunicação com outros componentes através de barramentos (dados, endereços e controle)
- Interface com memória RAM através do controlador de memória
- Comunicação com dispositivos de entrada/saída via interfaces específicas ou controladores
- Gerenciamento de interrupções para responder a eventos externos
