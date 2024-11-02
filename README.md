# Árvore Binária em C
Este repositório contém uma implementação de uma árvore binária em C, incluindo funções para inserção, busca, remoção e travessia de nós. A estrutura é ideal para armazenar e organizar dados de forma hierárquica e oferece eficiência em operações de busca e inserção.
## Índice
- Sobre o Projeto
- Funcionalidades
- Pré-requisitos
- Instalação
- Como Usar
- Exemplo de Uso
- Estrutura do Repositório
- Contribuições
- Licença

  
## Sobre o Projeto
Este projeto é uma implementação de uma árvore binária em C. Árvores binárias são estruturas de dados recursivas em que cada nó pode ter no máximo dois filhos, comumente chamadas de filho esquerdo e filho direito. Elas são amplamente usadas em algoritmos e estruturas de dados para organizar dados de forma eficiente.

## Funcionalidades
### A implementação da árvore binária inclui:

- Inserção de novos elementos
- Busca de elementos
- Remoção de elementos
- Travessia em ordem (in-order), pré-ordem (pre-order) e pós-ordem (post-order)
- Cálculo de altura da árvore e verificação de balanceamento

## Pré-requisitos
- Compilador C (por exemplo, GCC)
- Sistema operacional: Windows, MacOS ou Linux

## Instalação
- Clone o repositório e compile o código:

bash
Copiar código
git clone https://https://github.com/Santiago1431/ARVORE-BINARIA.git
- cd nome-do-repositorio

## Como Usar
- Execute o Comando no  compilado:
  ~~~
  make
  ~~~
- Depois Execute:
  ~~~
  ./main.exe
  ~~~
  
Siga as instruções no terminal para inserir nós, buscar elementos e realizar outras operações.

## Exemplo de Uso
### Aqui está um exemplo de uso, onde inserimos elementos, fazemos a busca de um nó específico e percorremos a árvore:


// Exemplo de código para usar a árvore binária
```
ArvoreBinaria* raiz = NULL;
int main() {
   

    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 20);

    printf("Travessia em ordem: ");
    percorrerEmOrdem(raiz);

    if (buscar(raiz, 20)) {
        printf("\nElemento 20 encontrado!");
    }

    return 0;
}
```

## Estrutura do Repositório
- arvore_binaria.c: Implementação das funções da árvore binária
- arvore_binaria.h: Arquivo de cabeçalho com as definições de funções
- README.md: Documentação do repositório

## Contribuições
#### Contribuições são bem-vindas! Por favor, abra uma issue ou envie um pull request para propor melhorias.


Esse README deve fornecer uma visão geral clara e prática para novos usuários ou colaboradores interessados no projeto.
