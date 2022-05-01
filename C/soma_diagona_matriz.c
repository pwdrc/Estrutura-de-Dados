#include<stdio.h>

int main(void){
	int mat[3][3];
	int sumD = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &mat[i][j];
			if((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0))
				sumD = sumD + mat[i][j]; 
		}
	}
	printf("SOMA = %d", sumD);
}
	
	
