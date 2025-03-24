---
id: memoria
aliases: []
tags: []
---

# Memória

**Tópicos relacionados:**
- [Visão Geral da CPU](visao-geral.md)
- [Registradores](registradores.md)
- [Barramento e Armazenamento](barramento-armazenamento.md)
- [Processo de Boot](processo-boot.md)
- [Arquitetura de Computadores](../arquiteturas/arquitetura-computadores.md)
# Tipos de memória

Um computador utiliza diversos tipos de memória, cada uma com características específicas
que determinam seu uso, velocidade, capacidade e persistência.


## Memória Principal

### RAM (Random Access Memory)

- Memória volátil de acesso aleatório
- Armazena dados e instruções em execução temporariamente
- Perde seu conteúdo quando o computador é desligado
- Tipos principais:
    - DRAM (Dynamic RAM)
- Mais comum e de menor custo
- Necessita de refresh constante para manter os dados
- Maior capacidade, porém mais lenta que a SRAM
- Utilizada como memória principal em computadores
    - SRAM (Static RAM)
- Não necessita de refresh
- Mais rápida que a DRAM
- Maior custo e menor densidade
- Utilizada em memória cache


### ROM (Read-Only Memory)

- Memória não-volátil
- Conteúdo gravado durante a fabricação
- Dados permanecem mesmo sem energia
- Variações:
    - PROM (Programmable ROM): programável uma única vez
    - EPROM (Erasable PROM): pode ser apagada com luz ultravioleta
    - EEPROM (Electrically Erasable PROM): pode ser apagada eletricamente
    - Flash ROM: evolução da EEPROM, permite apagar blocos de dados


## Memória Cache

- Memória intermediária entre CPU e RAM
- Extremamente rápida (geralmente SRAM)
- Armazena dados frequentemente acessados
- Hierarquia típica:
    - L1 Cache: menor e mais rápida, integrada ao núcleo da CPU
    - L2 Cache: maior capacidade que L1, um pouco mais lenta
    - L3 Cache: compartilhada entre núcleos de CPU, maior que L2


## Memória Secundária

### Armazenamento Não-Volátil

- Mantém dados mesmo sem energia
- Maior capacidade que RAM
- Mais lenta que a memória principal
- Exemplos:
    - HDD (Hard Disk Drive)
- Armazenamento magnético com partes móveis
- Grande capacidade e baixo custo por GB
- Velocidades de acesso mais lentas (ms)
    - SSD (Solid State Drive)
- Baseado em memória flash
- Sem partes móveis, mais resistente a impactos
- Velocidades muito superiores ao HDD (μs)
- Maior custo por GB que HDDs
    - NVMe (Non-Volatile Memory Express)
- Interface avançada para SSDs
- Conectada diretamente ao barramento PCIe
- Velocidades significativamente maiores que SSDs SATA


## Memória Virtual

- Técnica que utiliza espaço em disco como extensão da RAM
- Gerenciada pelo sistema operacional através do paginador
- Permite executar programas maiores que a RAM física disponível
- Mais lenta que a RAM física


## Registradores

- Memória extremamente rápida dentro da CPU
- Capacidade muito limitada (bytes ou palavras)
- Usados para operações aritméticas e lógicas imediatas
- Tipos específicos para diferentes funções (dados, endereços, flags)


## Comparação de Desempenho


 Tipo de Memória | Velocidade Relativa | Capacidade Típica | Volatilidade |
|---------------------|-------------------|--------------|
 Registradores   | Extremamente rápida | Bytes             | Volátil      |
 Cache L1        | Muito rápida        | KB                | Volátil      |
 Cache L2/L3     | Rápida              | MB                | Volátil      |
 RAM             | Média               | GB                | Volátil      |
 SSD/NVMe        | Moderada            | TB                | Não-volátil  |
 HDD             | Lenta               | TB                | Não-volátil  |
