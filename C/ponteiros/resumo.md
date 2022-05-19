# Ponteiros

## Memória

### Memória ram

* metaforicamente, uma memória ram é constituída por gavetas
* cada gaveta é divididas em - a título didático - 4 regiões
* na região mais a esquerda, é possível colocar o sinal de + ou -
* nas três mais a direita, digitos de 0 a 9

* em computadores reais, cada "gaveta" contém 8 regiões
* cada região é chamada de **bit** e o conjunto de 8 bits formam **1 byte**
* o bit mais a esquerda é conhecido como bit de sinal (0 para positivo, 1 para negativo)

* para cada gaveta, há uma identificação numérica a ela associada
* essa identificação é chamada de endereço

### Declaração de variável

* ao declarar uma variável, é necessário reservar espaço suficiente na memória para armazenar o seu valor
* ex.: para variáveis inteiras, são reservados 4 bytes (gavetas); para float e double, 4 e 8 bytes, respectivamente
* apesar de uma variável possuir reservadas mais de 4 gavetas, ela está associada a somente um endereço

### Ponteiro ou apontador

* um ponteiro - também chamado de apontador - é um tipo de variável capaz de guardar um endereço variável
* ex.: em C, para uma variável ponteiro **a** guardar o endereço de uma variável **n** utiliza-se o seguinte comando: *a = &n;*
* o operador **&** antes do nome da variável significa *endereço de*
* ou seja, se uma variável ponteiro guarda o endereço de outra variável, diz-se que aquela variável aponta para esta

#### Declaração de variável tipo ponteiro

* **IMPORTANTE** - ponteiros para variáveis do tipo inteiro são diferentes de ponteiros de variáveis tipo float e char
* para declarar uma variável ponteiro para int, utiliza-se: int * ap1;
* para declarar uma variável ponteiro para float, utiliza-se: float * ap2;
* para declarar uma variável ponteiro para char, utiliza-se: char * ap3;

#### Uso de variáveis tipo ponteiros

* &: endereço de
* *: vá para
* **Obs.:** o uso do operador "vai para" é diferente de quando se declara uma variável do tipo ponteiro. 

#### Utilidade e aplicabilidade dos ponteiros

* os ponteiros como parâmetros de uma função serven para modificar variáveis que estiverem fora da função
