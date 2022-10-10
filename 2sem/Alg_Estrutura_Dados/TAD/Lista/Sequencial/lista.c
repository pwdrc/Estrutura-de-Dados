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



int inserirElementoNoFim(tipoLista *l, tipoElemento e) {
    if(l->numeroDeElementos == MAX)
        return -1;
    l->elementos[l->numeroDeElementos] = e;
    l->numeroDeElementos++;
}
