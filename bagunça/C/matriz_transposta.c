#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

int main() {
	int matriz[MAX][MAX];
	int trans[MAX][MAX];
	int x,y;

	srand(time(NULL));
	x = 1 + rand() % 10;
	y = 1 + rand() % 10;

	printf("	Matriz A:\n");
	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			matriz[i][j] = rand() % 99;
			trans[j][i] = matriz[i][j];
			printf("	%d	", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n	Matriz A transposta:\n");
		for(int i = 0; i < x; i++) {
			for(int j = 0; j < y; j++) {
				printf("	%d	", trans[i][j]);
			}
			printf("\n");
		}
}
