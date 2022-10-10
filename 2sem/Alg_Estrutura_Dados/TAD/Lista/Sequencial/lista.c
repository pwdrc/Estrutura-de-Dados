#include"lista.h"
#include<stdio.h>

void criarLista(tipoLista *l) {
    l->numeroDeElementos = 0;
}

void tamanhoDaLista(tipoLista *l) {
    if(l->numeroDeElementos == 0)
        printf("Sua lista foi criada e não possui elementos.\n");
    else printf("Sua lista possui um total de %d elementos.\n", l->numeroDeElementos);
}

int buscaElemento(tipoLista *l, tipoChave ch) {
    int i = 0;
    l->elementos[l->numeroDeElementos].chave = ch;
    while(l->elementos[i].chave != ch)
        i++;
    if(i == l->numeroDeElementos)
        return -1; // não encontrou o elemento desejado
    else return i; // encontrou o elemento na posição i
}

int inserirElementoNoFim(tipoLista *l, tipoElemento e) {
    if(l->numeroDeElementos == MAX)
        return -1;
    l->elementos[l->numeroDeElementos] = e;
    l->numeroDeElementos++;
}
