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

## Listas

- podem ser ordanadas ou não
- operações de busca e removação são comumente feitas em relação à chave do elemento
- a inserção varia:
|	ordenada	|	não ordenada	|
|:_____________________:|:_____________________:|
|operação de busca      |insere no início ou fim|

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
