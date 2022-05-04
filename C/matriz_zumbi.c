#include<stdio.h>

int main(){

	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);

	int coin = 0;
	int hp = 100;

	int mat[N][M];
	int x = 0;
	int y = 0;

	int mov;

	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	while(scanf("%c", &mov) != EOF){
		if(mov == '\n') continue;
		switch(mov){
			case 'D':
				y++;
				break;
			case 'S':
				x++;
				break;
			case 'A':
				y--;
				break;
			case 'W':
				x--;
		}
		if(mov[x][y] == 11){
			coin++;
			mov[x][y] = 0;
		}
		else if(mov[x][y] == 22)
			life -= 5;
	}
	prinft("posicao x: %d\n", x);
	printf("posicao y: %d\n", y);
	printf("moedas: %d", coin);
	printf("life: &d", hp);

	return 0;
}
