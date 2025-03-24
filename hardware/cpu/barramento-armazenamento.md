---
id: barramento-armazenamento
aliases: []
tags: []
---

# Barramento e Armazenamento

**Tópicos relacionados:**
- [Visão Geral da CPU](visao-geral.md)
- [Memória](memoria.md)
- [Organização de Computador](../arquiteturas/organização-computador.md)
- [Processo de Boot](processo-boot.md)
---
id: barramento-armazenamento
aliases:
  - barramento de armazenamento
  - storage bus
tags:
  - hardware
  - armazenamento
  - barramento
---

# Barramento de Armazenamento

Um barramento de armazenamento é um sistema de comunicação que conecta o processador (CPU) aos dispositivos de armazenamento como discos rígidos (HDs), unidades de estado sólido (SSDs), unidades ópticas (CD/DVD) e outros dispositivos de armazenamento.

## Características Principais

- **Transferência de Dados**: Permite a transmissão de dados entre o dispositivo de armazenamento e outros componentes do computador.
- **Protocolos de Comunicação**: Define regras específicas para que os dispositivos se comuniquem de forma eficiente.
- **Largura de Banda**: Determina a quantidade de dados que podem ser transferidos por segundo.

## Tipos Comuns de Barramentos de Armazenamento

1. **IDE/PATA** (Integrated Drive Electronics/Parallel ATA)
   - Tecnologia mais antiga
   - Velocidade máxima de 133 MB/s
   - Praticamente obsoleto nos sistemas modernos

2. **SATA** (Serial ATA)
   - Substituiu o IDE/PATA
   - SATA I: 1.5 Gb/s (150 MB/s)
   - SATA II: 3 Gb/s (300 MB/s)
   - SATA III: 6 Gb/s (600 MB/s)
   - Conectores menores e cabos mais finos que o IDE

3. **SCSI** (Small Computer System Interface)
   - Usado principalmente em servidores
   - Suporta mais dispositivos por controlador
   - Melhor desempenho para múltiplas operações simultâneas

4. **SAS** (Serial Attached SCSI)
   - Evolução do SCSI tradicional
   - Até 12 Gb/s nas versões mais recentes
   - Compatível com discos SATA
   - Comum em ambientes empresariais

5. **NVMe** (Non-Volatile Memory Express)
   - Projetado especificamente para SSDs
   - Conecta-se diretamente ao barramento PCIe
   - Muito mais rápido que SATA (até 32 Gb/s com PCIe 4.0 x4)
   - Menor latência e maior paralelismo

## Comparação de Desempenho

| Barramento | Velocidade Máx. | Ideal para |
|------------|-----------------|------------|
| SATA III   | 600 MB/s        | Uso doméstico, HDs tradicionais |
| SAS        | 12 Gb/s         | Servidores, storage empresarial |
| NVMe       | 32 Gb/s         | Workstations, gaming, alta performance |

## Considerações na Escolha

- **Compatibilidade**: Verificar se sua placa-mãe suporta o tipo de barramento.
- **Necessidade de Velocidade**: Para uso comum, SATA é suficiente; para alta performance, NVMe é recomendado.
- **Custo-Benefício**: Barramentos mais rápidos geralmente têm custo mais elevado.
- **Escalabilidade**: Considerar quantos dispositivos precisarão ser conectados.

O barramento de armazenamento é um componente fundamental que pode afetar significativamente o desempenho geral do sistema, especialmente em tarefas que exigem intenso acesso a dados.

