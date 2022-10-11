#include<stdio.h>
#include"lista.h"

int main() {
    tipo_lista l;
    tipo_elemento e;
    tipo_apontador p;

    criarLista(&l);

    if(vazia(&l) == 1)
        printf("A lista está vazia.\n");
    else printf("A lista não está vazia.\n");

    inserir(&l, 1);
    imprimirLista(&l);
    inserir(&l, 5);
    imprimirLista(&l);
    inserir(&l, -3);
    imprimirLista(&l);
}