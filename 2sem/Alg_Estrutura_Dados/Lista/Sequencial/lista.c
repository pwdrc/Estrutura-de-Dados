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

int remover(tipoLista *l, tipoChave ch) {
    int posicao = buscaElemento(l, ch);
    if(posicao == -1)
        return -1;
    for(int i = posicao; i < l->numeroDeElementos; i++) {
        l->elementos[i] = l->elementos[i+1];
    l->numeroDeElementos--; // atualiza a quantidade de elementos da lista para um a menos
    return 1;
    }

}

// só serve para lista ordenada!!!
int buscaBinaria(tipoLista *l, tipoChave ch) {
    int esq, dir, meio;
    esq = 0;
    dir = l->numeroDeElementos - 1;
    
    while(esq <= dir) {
        meio = ((esq+dir)/2);
        if(l->elementos[meio].chave == ch)
            return meio;
        else {
            if(l->elementos[meio].chave < ch)
                esq = meio + 1;
            else dir = meio + 1;
        }
    }

}
