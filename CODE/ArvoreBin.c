#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBin.h"

no* inserir(no *raiz, int dado){
    if (raiz == NULL){
        no *novo = malloc(sizeof(no));
        novo->valor = dado;
        novo->dir = NULL;
        novo->esq = NULL;
        return novo;
    }else{
        if (dado < raiz->valor)
           raiz->esq = inserir(raiz->esq, dado);
        else
            raiz->dir = inserir(raiz->dir, dado);
        return raiz;
    }
    
}

void exibir(no *raiz){
    if (raiz){
        exibir(raiz->esq);
        printf ("%d ", raiz->valor);
        exibir(raiz->dir);
    }
}

no* buscar(no *raiz, int dado){
    if (raiz)
    {
        if (dado == raiz->valor)
            return raiz;
        else if (dado < raiz->valor)
            return buscar(raiz->esq, dado);
        else
            return buscar(raiz->dir,dado);
    }
    return NULL;
}

no* remover(no* raiz, int dado){
    if (raiz == NULL)
    {
        printf ("\nValor não encontrado\n");
        return NULL;
    }else{
        if (dado == raiz->valor){
            //Nó folha(sem filhos)
            if (raiz->dir == NULL && raiz->esq == NULL){
                free(raiz);
                printf("\nnó removido %d\n", dado);
                return NULL;
            }else{
                //nó com 2 filhos
                if (raiz->dir != NULL && raiz->esq != NULL){
                    no *aux = raiz->esq;
                    while (aux->dir != NULL)
                        aux = aux->dir;
                    raiz->valor = aux->valor;
                    aux->valor = dado;
                    raiz->esq = remover(raiz->esq, dado);
                    printf("Nó removido\n");
                    return (raiz);
                }
                else{
                    //remover nó com um filho
                    no *aux;
                    if (raiz->esq != NULL)
                        aux = raiz->esq;
                    else
                        aux = raiz->dir;
                    free(raiz);
                    printf ("Elemento com 1 filho removido\n");
                    return aux; 
                }
                
            }
            
        }else {
            if(dado < raiz->valor)
                raiz->esq = remover(raiz->esq, dado);
            else
                raiz->dir = remover(raiz->dir, dado);
            return raiz;
        }
    }
    
}