#include"lista.h"
#include<stdio.h>

int main() {
    tipoLista lista;

    criarLista(&lista);

    printf("Quantidade de elementos da lista:\n");
    printf("%d\n", lista.numeroDeElementos);
}