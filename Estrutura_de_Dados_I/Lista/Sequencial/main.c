#include"lista.h"
#include<stdio.h>

int main() {
    tipoLista lista;

    criarLista(&lista);
    tamanhoDaLista(&lista);
    inserirElementoNoFim(&lista, 1);
    inserirElementoNoFim(&lista, 2);
    inserirElementoNoFim(&lista, 3);
    tamanhoDaLista(&lista);
    
    int buscaElementoUm = buscaElemento(&lista, 1);
    printf("%d\n", buscaElementoUm);
    int buscaElementoTrinta = buscaElemento(&lista, 30);
    printf("%d\n", buscaElementoTrinta);

    remover(&lista, 5);
    tamanhoDaLista(&lista);

    remover(&lista, 3);
    tamanhoDaLista(&lista);

}