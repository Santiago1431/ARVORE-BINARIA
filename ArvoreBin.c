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
