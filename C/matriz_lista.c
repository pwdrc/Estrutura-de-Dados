#include<stdio.h>
#define MAX 40

int main(void) {
	int n, m;
	int mat[MAX][MAX];
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(j % 2 == 0 && j < m/2)
				mat[i][j] = 1;
			else mat[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
