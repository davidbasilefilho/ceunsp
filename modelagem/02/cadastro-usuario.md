



# Cenário 1: Cadastro de usuário

## Expectativa do usuário sobre o sistema

O usuário tem uma que seja possível cadastrar um novo usuário no sistema.


## Objetivo

O objetivo do cadastro é criar um anúncio.


## Regras

- Dados obrigatórios devem ser informados.
- A senha do usuário deve ter no mínimo 8 caracteres.
- Identificador deve ser único.


## Perguntas

- O usuário tem que validar o sistema?


## Testes

### Caminho feliz

- Preencheu todos os dados e submeteu o formulário
- Quando o usuário tentar se cadastrar com a senha maior que 8 caracteres -> Ok
- Não existe usuário com o email joaosilva@email.com. Quando tento me cadastrar com o emal anterior -> Ok


### Caminho triste

- Campo obrigatório em branco e submeteu o formulário -> retorna erro
- Quando o usuário tentar se cadastrar com a senha menor que 8 caracteres -> retorna erro
- Tem um usuário com o email joaosilva@email.com Quando tento me cadastrar usando o email anterior -> retorna erro
