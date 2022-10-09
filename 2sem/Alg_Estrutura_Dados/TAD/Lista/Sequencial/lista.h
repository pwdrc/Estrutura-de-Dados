#ifndef LISTA_H
#define LISTA_H

#define MAX 50

typedef int tipoChave;

typedef struct {
    tipoChave chave;
} tipoElemento;

typedef struct {
    tipoElemento elementos[MAX];
    int numeroDeElementos;
} tipoLista;

void criarLista(tipoLista *l);

#endif
