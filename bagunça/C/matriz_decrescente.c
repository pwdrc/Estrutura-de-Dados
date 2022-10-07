#include<stdio.h>
#define MAX 40

int main(void) {
	
	int n, ni, m;
	int mat[MAX][MAX];
	
	scanf("%d %d", &ni, &m);
	n = ni/2;
	
	for(int i = 0; i < ni/2; i++) {
		for(int j = 0; j < m; j++) {
			mat[i][j] = n;
		}
		n--;
	}
	
	for(int i = 0; i < ni; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
