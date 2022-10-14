#ifndef LISTA_H
#define LISTA_H

// TAD - lista - modelagem

typedef int tipoChave;

typedef struct tipoElemento {
    tipoChave chave;
    // ...
} tipoElemento;


typedef struct tipoNo *tipoApontador;
typedef struct tipoNo {
    tipoElemento elemento;
    tipoApontador proximo;
} tipoNo;

typedef struct tipoLista {
    tipoApontador primeiro;
    // tipoApontador ultimo;
} tipoLista;

// TAD - lista - operações
void criarLista(tipoLista *l);
void imprimirLista(tipoLista *l);
void icmc(tipoLista *l, tipoChave ch);
void ifim(tipoLista *l, tipoChave ch);
// void procurar(tipoLista *l, tipoChave);
void remover(tipoLista *l, tipochave ch);

#endif