#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int mat[2][n][n];

	int soma[n][n], sub[n][n];

	int a = 0;
	while(a < 2) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < n; k++) {
				scanf("%d ", &mat[a][j][k]);
			}
		}
		a++;
	}

	for(int j = 0; j < n; j++) {
		for(int k = 0; k < n; k++) {
			soma[j][k] = mat[0][j][k] + mat[1][j][k];
			sub[j][k] = mat[0][j][k] - mat[1][j][k];
			}
		}
	
	for(int j = 0; j < n; j++) {
		for(int k = 0; k < n; k++) {
			printf("%d ", soma[j][k]);
		}
		printf("\n");
	}

	printf("\n");

	for(int j = 0; j < n; j++) {
		for(int k = 0; k < n; k++) {
			printf("%d ", sub[j][k]);
		}
		printf("\n");
	}
}
