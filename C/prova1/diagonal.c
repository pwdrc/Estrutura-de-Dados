#include<stdio.h>

int main() {
	int mat[20][20];

	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 20; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 20; j++) {
			if(i >= j)
				printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
