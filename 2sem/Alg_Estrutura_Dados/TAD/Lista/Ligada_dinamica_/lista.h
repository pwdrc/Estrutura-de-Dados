#ifndef LISTA_H
#define LISTA_H

typedef int tipo_chave;

typedef struct {
    tipo_chave chave;
    // outros dados
} tipo_elemento;

typedef struct tipo_no *tipo_apontador;

typedef struct {
    tipo_elemento e;
    tipo_apontador proximo;
} tipo_no;

// lista em si
typedef struct {
    tipo_apontador inicio; // primeiro elemento e inicio da lista
    //tipo_apontador ultimo; // também é possível definir um apontador para o último elemento
} tipo_lista;

// operações
int criarLista(tipo_lista *l);
int inserir(tipo_lista *l, tipo_elemento e);
void imprimirLista(tipo_lista *l);
int remover(tipo_lista *l, tipo_chave ch);
int vazia(tipo_lista *l);
tipo_elemento pesquisar(tipo_lista *l, tipo_chave ch);
void zerarLista(tipo_lista *l);

#endif