---
id: explicacao
aliases: []
tags: []
---

# jQuery: Explicação

**Tópicos relacionados:**
- [HTML](../html/explicacao.md)
- [CSS](../css/explicacao.md)
- [PHP](../php/explicacao.md)
# jQuery

## O que é?

É uma biblioteca de JavaScript, uma estrutura de funções e métodos. Geralmente é usado para manipular o DOM (Document Object Model) e eventos.


## Exemplo de uso

```js
// Esperar o documento ser carregado
$(document).ready(function() {
  // Selecionar um elemento
  $('button').click(function() {
    // Alterar o texto do elemento
    $(this).text('Clicado');
  });
});
```
