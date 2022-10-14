#include"lista.h"
#include<stdio.h>
#include<stdlib.h>

void criar(tipo_lista *l) {
    l->primeiro == NULL;
}

void inserirTantoFaz(tipo_lista *l, tipo_registro r) {
    apontador novo = (apontador) malloc(sizeof(tipo_no));
    novo->r = r;
    novo->prox = l->primeiro;
    l->primeiro = novo;    
}

/**
int vazia(tipo_lista *l) {
    if(l->inicio == NULL) return 1; // vazia
    return 0; // não vazia
}

int inserir(tipo_lista *l, tipo_elemento e) {

	tipo_apontador novo = (tipo_apontador) malloc(sizeof(tipo_no));
	if (novo == NULL)
		return 0;

	novo->e = e;
	novo->proximo = lista->inicio;
	lista->inicio = novo;

	return 1;

}

void imprimirLista(tipo_lista *l) {
    for(tipo_apontador i = l->inicio; i->proximo != NULL; i->proximo) {
        printf("%d", i);
    }
    printf("\n");
}
**/