# TAD - Tipo Abstrato de Dados

## Intro e Conceitos Gerais

- **Tipos de dados**:
	- relacionado à linguagem de programação
	- define o conjunto de valores que pode assumir e as operações disponíveis
	- Ex.: variáveis do tipo *int* podem assumir valores inteiros e suportar operações aritméticas

- **Tipo Abstrato de Dados (TAD)**:
	- tipos de dados desvinculados da implementação
	- definido pelo part (valor,operação)

- **Estrutura de Dados (ED)**:
	- modo particular de armazenar e organizar dados
	- arranjo, lista ligada, árvore ...

### TADs em C

- podem ser implementas utilizando módulos
- cada TAD é implementado em um arquivo.c
- um arquivo.h deve ser feito com os protótipos das funções públicas e com as definições dos tipos de dados
- utiliza **structs**:
```
typedef struct {
	<type> <name>
	.
	.
	.
} <struct_name>;
```
- para acessar cada elemento dentro da estrutura:
	- Nome.Elemento1 ou Nome -> Elemento1 (caso for ponteiro)
	- caso ponteiro, utiliza-se a função **malloc**

#### Malloc(sizeof())

- retorna um tipo \*void
- para transformá-lo, utiliza-se o "casting" (ex.: int * x = **(int * )** malloc(sizeof(int));)

## Listas

- podem ser ordanadas ou não
- operações de busca e removação são comumente feitas em relação à chave do elemento
- a inserção varia:
|ordenada|não ordenada|
|___|___|
|operação de busca|insere no início ou fim|

### TAD Listas

- **estática**: utiliza vetores ou arranjos
	- **vantagens**: tempo constante de acesso aos dados e inserção (não-ordenada)
	- **desvantagens**: alto custo para remover (e inserir em uma posição dada); tamanho máximo é pré-definido
	- **quando utilizar**: listas pequenas, tamanho máximo conhecido, poucas operações de inserção/remoção

- **dinâmica**: utiliza listas ligadas (ponteiros)
	- forma comum: ponteiro "primeiro"
	- cada elemento aponta para o próximo
	- lista vazia: aponta para nulo
	- uma posição é definida por um ponteiro que aponta para cada nó/elemento da lista


#### Lista Linear Sequencial

- ordem lógica dos elementos (vista pelo usuário) == ordem física (em memória)
- arranjo de tamanho fixo
- **modelagem:**
```
#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
	TIPOCHAVE chave;
	// etc ...	
} REGISTRO;

typedef struct {
	REGISTRO A[MAX];
	int numeroDeElementos;
} LISTA;
```
- **funções comuns:**
	- inicializar a estrutura
	- quantida de elementos
	- exibir elemento
	- buscar elementos
	- inserir
	- excluir
	- reiniciar

**I) Inicialização**
```
void inicializaLista(LISTA * l) {
	l->numeroDeElementos = 0;
}
```

**II) Exibir Lista**
```
void exibirLista(LISTA * l) {
	for(int i = 0; i < l->numeroDeElementos; i++)
		printf("%i", l->A[i].chave);
	printf("\n");
}
```

**III) Buscar elemento**

```
int buscaSequencial(LISTA * l, TIPOCHAVE ch) {
	for(int i = 0; i < l->numeroDeElementos; i++) {
		if(ch == l->A[i].chave)
			return i;
			break;
		
	}
	return -1;
}
```
**IV) Iserir elemento**

- lista não estiver cheia e índice passado pelo usuário for válido: desloca todos os elemetnso posteriores uma posição a direita; insere o elemento; soma um no numero de elementos; retorna true; caso contrário, false
```
bool inserirElemento(LIST * l, REGISTRO r, int i) {
	if((l->numeroDeElementos == MAX)
	|| (i < 0)
	|| (i > l->numeroDeElementos))
		return false;
	for(int j = l->numeroDeElementos; j > i; j--)
		l->A[j] = l->A[j-1];
	l->A[i] = r;
	l->numeroDeElementos++;
	return true;
}
```

**V) Exclusão**
- verifica se o elemento existe na chave passada pelo usuário
- se houver: excluir o elemento e desloca todos os outros posteriores para uma posição para a esquerda e diminui em um o numero de elementos; retorna true
- se não: retorna false
```
bool excluir(TIPOCHAVE ch, LISTA * l) {
	int pos = buscaSequencial(l, ch);
	if(pos == -1) return false;
	for(int i = pos; j < l->numeroDeElementos - 1; j++) 
		l->A[j] = l->A[j+1];
	l->numeroDeElementos--;
	return true;	
}
```

**VI) Reinicializarção da lista**
```
void reinicializarLista(LISTA * l) {
	l->numeroDeElementos = 0;
}
```

#### Dinâmica - implementações

**Criar**
- Pré/pós-condições: nenhuma/estrutura de dados é inicializada

Antes		Depois
L -> ?		L -> NULL

**Inserir (primeira posição)**
- pré/pós-condição: memória disponível/elemento inserido na primeira posição

Antes		Depois
L -> null	L -> elemento -> null

P -> item = item;
P -> prox = \*L;
\*L = P;

E se a lista estiver vazia?

**Inserir (última posição)**
-  


**Inserir em qualquer posição**
- P -> novo = ;


**Pesquisar elemento**
- pré/pós-condição: nenhuma/retorna posição do elemento ou um valor caso não exista

E se a lista for ordenada?

**Remover elemento por posição**
- pré/pós-condição: fornecer uma posição válida/o elemento da posição é removido

if(P -> prox == Posição)
	P.prox = Posição.prox

## Referências

[UNIVESP](https://www.youtube.com/playlist?list=PLxI8Can9yAHf8k8LrUePyj0y3lLpigGcl)

[IME](https://www.ime.usp.br/~pf/estruturas-de-dados/aulas/index.html)

[diegofurts](https://github.com/diegofurts/alg1_bsi_2022)

[Geeks for Geeks](https://www.geeksforgeeks.org/data-structures/)
