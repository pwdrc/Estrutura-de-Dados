#include<stdio.h>
#include"lista.h"

int main() {
    
    tipoLista l;

    criarLista(&l);
    imprimirLista(&l);
    icmc(&l, 1);
    imprimirLista(&l);
    icmc(&l, 2);
    imprimirLista(&l);
    icmc(&l, 3);
    imprimirLista(&l);
    ifim(&l, 0);
    imprimirLista(&l);


}