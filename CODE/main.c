#include "ArvoreBin.h"
#include <stdio.h>
#include <stdlib.h>

void menu() {
    no* raiz = NULL;
    no* busca = NULL;
    int op, valor;

    while (1) {
        printf("\n\nMenu:\n");
        printf("1. Inserir\n");
        printf("2. Buscar\n");
        printf("3. Remover\n");
        printf("4. Exibir (em ordem)\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                raiz = inserir(raiz, valor);
                printf("Valor inserido com sucesso!\n");
                break;
            case 2:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &valor);
                busca = buscar(raiz, valor);
                if (busca) {
                    printf("Valor encontrado!\n");
                } else {
                    printf("Valor não encontrado.\n");
                }
                break;
            case 3:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                raiz = remover(raiz, valor);
                break;
            case 4:
                printf("Elementos da árvore em ordem: ");
                exibir(raiz);
                printf("\n");
                break;
            case 5:
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}

int main(){
    
    menu();
    return 0;
    
}

