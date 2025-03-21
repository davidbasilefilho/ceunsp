---
id: estrutura
aliases: []
tags: []
---

# Estrutura Básica do HTML

O HTML (HyperText Markup Language) possui uma estrutura básica que serve como fundamento para todas as páginas web. A seguir, vamos explorar cada parte dessa estrutura:

## 1. Declaração DOCTYPE

```html
<!DOCTYPE html>
```

- **Função**: Informa ao navegador qual versão do HTML está sendo utilizada.
- **Importância**: Garante que a página seja renderizada no modo padrão, não no modo "quirks".
- **Observação**: No HTML5, a declaração é simplificada como mostrado acima.

## 2. Elemento HTML

```html
<html lang="pt-br">
</html>
```

- **Função**: É o elemento raiz que envolve todo o conteúdo da página.
- **Atributos comuns**: 
  - `lang`: Define o idioma principal do documento (importante para acessibilidade e SEO).
- **Importância**: Define o início e o fim do documento HTML.

## 3. Elemento HEAD

```html
<head>
    <!-- Metadados e links para recursos -->
</head>
```

- **Função**: Contém metadados (dados sobre dados) e informações sobre o documento.
- **Conteúdo típico**:
  - Título da página
  - Links para CSS
  - Links para scripts JavaScript
  - Metadados como charset, viewport, descrição, palavras-chave
  - Ícones favicon
- **Importância**: Fornece informações ao navegador sobre como processar o documento e não é visível para os usuários no navegador.

## 4. Elemento META

```html
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<meta name="description" content="Descrição da página">
```

- **Função**: Define vários metadados para o documento.
- **Tipos comuns**:
  - `charset`: Define a codificação de caracteres (normalmente UTF-8).
  - `viewport`: Controla como a página se adapta a diferentes dispositivos.
  - `description`: Fornece uma descrição para motores de busca.
  - `keywords`: Lista palavras-chave para SEO.
  - `author`: Especifica o autor do documento.
- **Importância**: Essencial para SEO, responsividade e correta exibição de caracteres.

## 5. Elemento TITLE

```html
<title>Título da Página</title>
```

- **Função**: Define o título do documento.
- **Importância**: 
  - Aparece na aba do navegador
  - Usado como título em resultados de busca
  - Usado como título ao salvar a página nos favoritos

## 6. Elemento BODY

```html
<body>
    <!-- Todo o conteúdo visível da página -->
</body>
```

- **Função**: Contém todo o conteúdo visível da página.
- **Conteúdo típico**:
  - Textos
  - Imagens
  - Links
  - Vídeos
  - Formulários
  - Tabelas
  - Listas
  - etc.
- **Importância**: É onde está todo o conteúdo que o usuário vê e interage.

## Exemplo Completo

```html
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="Descrição da página">
    <title>Título da Página</title>
    <link rel="stylesheet" href="estilo.css">
    <script src="script.js" defer></script>
</head>
<body>
    <header>
        <h1>Título Principal</h1>
        <nav>
            <ul>
                <li><a href="#">Home</a></li>
                <li><a href="#">Sobre</a></li>
                <li><a href="#">Contato</a></li>
            </ul>
        </nav>
    </header>
    
    <main>
        <section>
            <h2>Seção 1</h2>
            <p>Conteúdo da seção 1...</p>
        </section>
        
        <section>
            <h2>Seção 2</h2>
            <p>Conteúdo da seção 2...</p>
        </section>
    </main>
    
    <footer>
        <p>&copy; 2025 - Todos os direitos reservados</p>
    </footer>
</body>
</html>
```

## Elementos Semânticos no HTML5

O HTML5 introduziu vários elementos semânticos que ajudam a estruturar o documento de forma mais significativa:

- `<header>`: Cabeçalho da página ou de uma seção.
- `<nav>`: Seção de navegação.
- `<main>`: Conteúdo principal da página.
- `<section>`: Seção genérica de conteúdo.
- `<article>`: Conteúdo independente e autocontido.
- `<aside>`: Conteúdo relacionado mas separado do conteúdo principal.
- `<footer>`: Rodapé da página ou de uma seção.
- `<figure>` e `<figcaption>`: Para imagens com legendas.

A utilização correta desses elementos semânticos melhora a acessibilidade, SEO e manutenibilidade do código.
```

Criei um documento detalhado explicando a estrutura básica do HTML, abordando cada parte fundamental como DOCTYPE, elementos HTML, HEAD, META, TITLE e BODY. Incluí também exemplos de código para cada seção, um exemplo completo de uma página HTML estruturada, e uma explicação sobre os elementos semânticos introduzidos no HTML5. O documento está organizado de forma clara e didática, facilitando o entendimento da estrutura básica do HTML.
