#include<stdio.h>
#define LMAX 10
#define CMAX 10

int main(void){
	int matriz1[LMAX][CMAX], matriz2[LMAX][CMAX], soma[LMAX][CMAX];
	int n;
	scanf("%d", &n);

	if(n <= LMAX && n <= CMAX) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++){
				scanf("%d", &matriz1[i][j]);
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++){
				scanf("%d", &matriz2[i][j]);
			}
		}
		printf("Matriz A\n");
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++){
				printf("%d ", matriz1[i][j]);
			}
			printf("\n");
		}
		printf("Matriz B\n");
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++){
				printf("%d ", matriz2[i][j]);
			}
			printf("\n");
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				soma[i][j] = matriz1[i][j] + matriz2[i][j];
			}
		}
		printf("Matriz Resultante\n");
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++){
				printf("%d ", soma[i][j]);
			}
			printf("\n");
		}
	}
}
