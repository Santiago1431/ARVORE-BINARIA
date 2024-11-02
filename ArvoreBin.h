#ifndef ARVOREBIN_H_INCLUDED
#define ARVOREBIN_H_INCLUDED

typedef struct ArvoreBin{
    int valor;
    struct ArvoreBin *esq, *dir;
}no;

no* inserir(no *raiz, int dado);
void exibir (no *raiz);
no* buscar(no *raiz, int dado);
no* remover(no* raiz, int dado);

#endif