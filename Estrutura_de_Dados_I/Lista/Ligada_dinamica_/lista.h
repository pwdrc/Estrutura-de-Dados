#ifndef LISTA_H
#define LISTA_H

// modelagem do TAD
typedef int tipo_valor; // chave

typedef struct {
    tipo_valor valor;
    // outros atributos
} tipo_registro; // ou registro

typedef struct {
    tipo_registro r;
    struct aux *prox;
} tipo_no;

typedef tipo_no *apontador;

typedef struct {
    apontador primeiro;
    // apontador ultimo;
} tipo_lista;

// operações suportadas
void criar(tipo_lista *l);
void inserirTantoFaz(tipo_lista *l, tipo_registro r);
#endif