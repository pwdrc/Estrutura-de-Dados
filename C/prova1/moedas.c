#include<stdio.h>

int main() {
	// valores das moedas: 1,5,10,25,50,100,500
	// só empilha se a moeda de cima for menor que a de baixo
	
	int topo[6] = {501, 501, 501, 501, 501, 501}; // variável para salvar o topo de cada pilha 
	int pilha[6] = {0,0,0,0,0,0}; // variável para contar o n de moedas em cada pilha
	int comparacao; // variável para armazenar o valor que será comparado com o topo de cada pilha

	for(int i = 0; i < 20; i++) {
		scanf("%d", &comparacao);
		for(int j = 0; j < 6; j++) {
			if(comparacao <= topo[j]) {
				topo[j] = comparacao;
				pilha[j]++;
				break;				
			}
		}
	}

	for(int j = 0; j < 6; j++) {
		printf("%d ", pilha[j]);
	}
	
}
