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


}