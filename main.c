#include "ArvoreBin.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    no* raiz = NULL;

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 12);
    raiz = inserir(raiz, 15);
    raiz = inserir(raiz, 23);
    raiz = inserir(raiz, 140);
    raiz = inserir(raiz, 101);
    raiz = inserir(raiz, 1000);

    exibir(raiz);
    
    return 0;
}

