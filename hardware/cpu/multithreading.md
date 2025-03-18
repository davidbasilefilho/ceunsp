# Multi threading



## O que é Multithreading?

Multithreading é uma técnica de execução em que um único processo pode ter múltiplas linhas de execução (threads) rodando concorrentemente. Cada thread representa um fluxo de controle independente dentro do mesmo espaço de endereçamento do processo.


## Conceitos Básicos

- [Thread](#thread) - Unidade básica de execução que pode ser programada pelo sistema operacional
- [Processo](#processo) - Programa em execução com seu próprio espaço de memória
- [Paralelismo](#paralelismo) - Execução simultânea real (necessita múltiplos núcleos)
- [Concorrência](#concorrência) - Progresso de múltiplas tarefas em períodos sobrepostos (não necessariamente ao mesmo tempo)


## Funcionamento do Multithreading

O multithreading funciona através da criação e gerenciamento de múltiplas threads dentro do mesmo processo. Cada thread:

- Compartilha o mesmo espaço de endereçamento do processo
- Possui sua própria pilha de execução (stack)
- Mantém seu próprio conjunto de registradores
- Pode ser programada independentemente pelo sistema operacional

Quando o sistema operacional alterna entre threads (context switching), ele salva o estado dos registradores da thread atual e restaura o estado da próxima thread a ser executada.


## Tipos de Multithreading

### Temporal Multithreading

- [Fine-grained](#fine-grained) (granularidade fina): Alterna a execução de threads a cada poucos ciclos de clock
- [Coarse-grained](#coarse-grained) (granularidade grossa): Alterna threads apenas quando ocorrem eventos mais longos (como falhas de cache)


### Simultaneous Multithreading (SMT)

- Permite que múltiplas threads sejam executadas em paralelo no mesmo núcleo de processador
- Utiliza recursos de hardware que de outra forma ficariam ociosos
- Exemplos: Intel Hyper-Threading, AMD Simultaneous Multithreading


## Benefícios do Multithreading

- Melhor utilização dos recursos do processador
- Maior capacidade de resposta em aplicações interativas
- Execução mais eficiente de tarefas concorrentes
- Redução do tempo ocioso do processador
- Melhor desempenho em sistemas multiprocessados


## Desafios e Problemas

### Sincronização

- Condições de corrida (race conditions)
- Deadlocks (impasses)
- Starvation (inanição)


### Ferramentas de Sincronização

- Mutexes (exclusão mútua)
- Semáforos
- Monitores
- Variáveis de condição
- Barreiras de sincronização


## Implementação nos Processadores Modernos

Os processadores modernos implementam multithreading de diversas formas:

- [Intel Hyper-Threading](#intel-hyper-threading): Permite que cada núcleo físico execute duas threads simultaneamente
- [AMD SMT](#amd-smt): Similar ao Hyper-Threading da Intel
- [POWER/SPARC](#powersparc): Algumas arquiteturas suportam até 8 threads por núcleo


## Multithreading vs Multiprocessamento

