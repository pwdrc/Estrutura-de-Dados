#ifndef LISTA_H
#define LISTA_H

#define MAX 50

typedef int tipoChave;

typedef struct {
    tipoChave chave;
} tipoElemento;

typedef struct {
    tipoElemento elementos[MAX+1];
    int numeroDeElementos;
} tipoLista;

void criarLista(tipoLista *l);
void tamanhoDaLista(tipoLista *l);
int inserirElemento(tipoLista *l, tipoElemento e);
int buscaElemento(tipoLista *l, tipoChave ch);
int remover(tipoLista *l, tipoChave ch);

// só serve para lista ordenada!!! O(log n)
int buscaBinaria(tipoLista *l, tipoChave ch);
// só serve para lista ordenada!!! O(log n)
#endif
