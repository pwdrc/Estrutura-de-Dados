#include"lista.h"
#include<stdio.h>
#include<stdlib.h>

int criarLista(tipo_lista *l) {
    l->inicio = NULL;
}

int vazia(tipo_lista *l) {
    if(l->inicio == NULL) return 1; // vazia
    return 0; // não vazia
}

// inserir na frente - ignora ordem
int inserir(tipo_lista *l, tipo_elemento e) {
    tipo_apontador novo = (tipo_apontador) malloc(sizeof(tipo_no));
    // if(novo == NULL) // memória cheia
    
    novo->e = e;
    novo->proximo = l->inicio;
    l->inicio = novo;

    return 1;
}

void imprimirLista(tipo_lista *l) {
    for(tipo_apontador i = l->inicio; i->proximo != NULL; i->proximo) {
        printf("%d", i);
    }
    printf("\n");
}