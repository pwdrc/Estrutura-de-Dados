#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void criarLista(tipoLista *l) {
    l->primeiro = NULL;
}

void imprimirLista(tipoLista *l) {
    
    // verifica se a lista está vazia
    if(l->primeiro == NULL) {
        printf("A lista está vazia.\n");
        return;
    }

    // cria tipo apontador auxiliar para não perder a lista com o deslocamento do "l->primeiro"
    
    tipoApontador aux;
    
    aux = l->primeiro;
    
    while(aux != NULL) {
        printf("%d ", aux->elemento.chave);
        aux = aux->proximo;
    }
    printf("\n");
    free(aux);
}

void icmc(tipoLista *l,  tipoChave ch) {
    
    tipoApontador novo = (tipoApontador)malloc(sizeof(tipoNo));
        
    novo->elemento.chave = ch;
    novo->proximo = l->primeiro;
    l->primeiro = novo;   
} 

void ifim(tipoLista *l, tipoChave ch) {

    tipoApontador novo = (tipoApontador)malloc(sizeof(tipoNo));
    novo->elemento.chave = ch;
    novo->proximo = NULL;

    // se estiver vazia
    if(l->primeiro == NULL) {
        l->primeiro = novo;
        return;
    }
    
    // se não estiver
    tipoApontador ultimo;
    ultimo = l->primeiro;
    while(ultimo->proximo != NULL)
        ultimo = ultimo->proximo;
    ultimo->proximo = novo;
    return;
}