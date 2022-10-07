# Estrutura de dados

## Estrutura de dados elementares

### Pilhas e filas

- conjuntos dinâmicos

#### Pilhas

- LIFO (Last In, First Out == o último elemento a entrar é o primeiro a sair)
- A ordem da retirada dos elementos é inversa ao da entrada
- O *TOPO* indica o último elemento inserido
- Se *TOPO* == 0, a pilha está vazia
- Se a pilha está vazia e mesmo assim é realizada a operação de retirada de elementos, ocorreu um *estouro negativo*


**Operações e nomenclaturas comuns em pilhas**

- INSERT -> PUSH
- DELETE -> POP
- STACK-EMPTY: verifica se a pilha está vazia


PUSH

```
S.topo = S.topo + 1;
S[S.topo] = x;
```

POP

```
if SACK-EMPTY(S)
	error "underflow"
else S.topo = S.topo - 1;
	return S[S.topo + 1];
```

STACK-EMPTY
```
if S.topo == 0
	return true;
else return false;
```

#### Filas

- FIFO (First In, First Out == Primeiro a entrar, primeiro a sair)
- Tem um **início (ou cabeça)** e um **fim (ou cauda)**
- O elemento retirado da fila é sempre o que está **início**


**Operações e nomenclaturas comuns em filas**

- INSERT -> ENQUEUE
- DELETE -> DEQUEUE 

ENQUEUE
```
Q[Q.fim] = x;
if(Q.fim == Q.comprimento)
	Q.fim = q;
else Q.fim = Q.fim + 1;
```

DEQUEUE
```
x = Q[Q.inicio];
if Q.inicio == Q.comprimento
	Q.inicio = 1;
else Q.inicio = Q.inicio + 1;
return x;
```

### Listas Ligadas

- podem ser de várias formas: simplemente ligada ou duplamente ligada; ordenada ou não; circular ou não
- se *simplemente ligada*, omite-se o ponteiro anterior em cada elemento
- estrutura de dados na qual os objetos são organizados de forma **linear**
- uma **lista duplamente ligada** tem cada elemento sendo um objeto com um atributo *chave* e dois atributos *ponteiros* (*próximo* e *anterior*), além de poder conter outros dados *satélites*
- dado um elemento **x** na lista, **x.proximo** aponto para o sucessor; **x.anterior**, para o antecessor:
							   elemento anterior <- x -> próximo elemento
							   <- : x.anterior
							   -> : x.proximo
- se **ordenada**, o elemento mínimo é o início da lista e o máximo, o final
- em uma **lista circular**, o ponteiro *anterior* do início da lista aponta para o fim e o ponteiro *proximo* aponta para o início

(A partir daqui, as listas tratadas serão supostas como **não ordenadas e duplamente ligadas**)


#### Busca em lista ligada (list-search)

- list-search (lista, chave)
- encontra o primeiro elemento com a chave informada na lista por meio de uma busca linear simples, retornando um ponteiro para esse elemento
- O(n)

```
x = L.inicio;
while x != null and x.chave != k
	x = x.proximo;
return x;
```

#### Inserção em uma lista ligada

- O(1) (lembrando-se que antes é preciso de uma busca, que é O(n))

```
x.proximo = L.inicio;
if L.inicio != nil
	l.inicio.anterior = x;
l.inicio = x;
x.anterior = nil;
```

#### Exclusão em uma lista ligada

- list-delete: remove o elemento x de uma lista ligada L
- deve receber um ponteiro para x e depois desligar x da lista atualizando os ponteiros
- se desejar excluir um elemento com uma determinada chave, deve-se utilizar a busca antes 

```
if x.anterior != nil
	x.anterior.proximo = x.proximo;
else L.inicio = x.proximo;
if x.proximo != nil
	x.promximo.anterior = x.anterior;
```


#### Sentinelas

- permite simplificar condições

```
x.anterior.proximo = x.proximo;
x.proximo.anterior = x.anterior;
```


