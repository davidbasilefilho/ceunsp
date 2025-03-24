---
id: niveis-memoria
aliases: []
tags: []
---

# Níveis de Memória

**Tópicos relacionados:**
- [Memória](memoria.md)
- [Registradores](registradores.md)
- [Visão Geral da CPU](visao-geral.md)
- [Organização de Computador](../arquiteturas/organização-computador.md)
- [Barramento e Armazenamento](barramento-armazenamento.md)

## Hierarquia de Memória

A hierarquia de memória é organizada em níveis, do mais rápido e menor capacidade ao mais lento e maior capacidade:

### 1. Registradores
- **Velocidade**: Extremamente rápidos (acesso em ciclos de clock)
- **Capacidade**: Muito pequena (bytes a kilobytes)
- **Quantidade típica**: 16 a 64 registradores (32 bits a 64 bits cada)
- **Localização**: Dentro da CPU
- **Tecnologia**: Flip-flops e latches
- **Função**: Armazenam dados em uso imediato pela CPU

### 2. Memória Cache
- **Cache L1**
  - **Velocidade**: Muito rápida (1-3 ciclos de clock)
  - **Capacidade**: 32KB a 64KB por núcleo (dividido entre instruções e dados)
  - **Localização**: Dentro da CPU, próximo às unidades de execução

- **Cache L2**
  - **Velocidade**: Rápida (10-20 ciclos de clock)
  - **Capacidade**: 256KB a 512KB por núcleo
  - **Localização**: Dentro da CPU

- **Cache L3**
  - **Velocidade**: Moderadamente rápida (40-60 ciclos de clock)
  - **Capacidade**: 2MB a 32MB (compartilhado entre núcleos)
  - **Localização**: Dentro da CPU, compartilhada entre núcleos
  - **Tecnologia**: SRAM (Static Random Access Memory)

### 3. Memória Primária (RAM)
- **Velocidade**: Relativamente rápida (100-200 ciclos de clock)
- **Capacidade**: 4GB a 128GB em sistemas comuns
- **Tecnologia**: DRAM (Dynamic Random Access Memory)
- **Características**: Volátil (perde dados ao desligar)
- **Função**: Armazena programas e dados em execução

### 4. Memória Secundária (Armazenamento)
- **SSD (Solid State Drive)**
  - **Velocidade**: Moderada (microssegundos de latência)
  - **Capacidade**: 256GB a 2TB típicos
  - **Tecnologia**: Memória flash NAND

- **HDD (Hard Disk Drive)**
  - **Velocidade**: Lenta (milissegundos de latência)
  - **Capacidade**: 1TB a 16TB típicos
  - **Tecnologia**: Discos magnéticos giratórios
  - **Função**: Armazenamento permanente de dados, programas e sistema operacional

### 5. Memória de Segurança (Backup)
- **Fitas magnéticas**
  - **Velocidade**: Muito lenta (acesso sequencial)
  - **Capacidade**: 1TB a 30TB por fita
  - **Tecnologia**: Fitas magnéticas
  - **Uso**: Backups corporativos de longo prazo

- **Armazenamento em nuvem**
  - **Velocidade**: Dependente da conexão de internet
  - **Capacidade**: Teoricamente ilimitada (TB a PB)
  - **Tecnologia**: Distribuído em data centers
  - **Função**: Backup externo, compartilhamento e acessibilidade

- **Discos ópticos (CD/DVD/Blu-ray)**
  - **Velocidade**: Lenta
  - **Capacidade**: 700MB (CD), 4.7GB (DVD), 25-100GB (Blu-ray)
  - **Tecnologia**: Óptica (laser)
  - **Uso**: Backups permanentes, distribuição de mídia

## Princípio de Localidade

A hierarquia de memória explora dois tipos de localidade:

- **Localidade Temporal**: Dados recentemente acessados provavelmente serão acessados novamente em breve
- **Localidade Espacial**: Dados próximos a áreas recentemente acessadas provavelmente serão acessados em seguida

Esses princípios guiam o design de caches e sistemas de memória virtual para otimizar o desempenho.

## Métricas de Desempenho

- **Latência**: Tempo para acessar um dado (ns a ms)
- **Largura de banda**: Taxa de transferência (MB/s a GB/s)
- **Taxa de acertos de cache (hit rate)**: Porcentagem de acessos encontrados no cache
- **Custo por byte**: Aumenta com a velocidade da memória

