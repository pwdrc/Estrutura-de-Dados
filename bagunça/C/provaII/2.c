// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int n, m;
	int maior = 0, menor = 1001;
	int linhaMenor, colunaMenor;
	int linhaMaior, colunaMaior;
	scanf("%d %d", &n, &m);

	int *mat;
	mat = malloc(n * m * sizeof(int));

	srand(time(NULL));
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			mat[(i*n) + j] = rand() % 1001;
			if(mat[(i*n) + j] > maior) {
				maior = mat[(i*n) + j];
				linhaMaior = i;
				colunaMaior = j;
			}
			else if(mat[(i*n) + j] < menor) {
				menor = mat[(i*n) + j];
				linhaMenor = i;
				colunaMenor = j;
			}
			//printf("%d ", mat[(i*n) + j]);
		}
		//printf("\n");
	}
	printf("maior: %d - linha: %d coluna: %d", maior, linhaMaior, colunaMaior);
	printf("\nmenor: %d - linha: %d coluna: %d\n", menor, linhaMenor, colunaMenor);
	free(mat);
}
