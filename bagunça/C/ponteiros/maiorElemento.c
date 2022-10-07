#include <stdio.h>

#define N 100

void maiorElemento(int *v, int n, int *maior);

void lerVetor(int *v, int n);

int main(){
    int n;
    int v[N];
    int maior;

    scanf("%d", &n);
    lerVetor(v, n);
    
    maiorElemento(v, n, &maior);
    printf("%d\n", maior);

    return 0;
}

void lerVetor(int *v, int n) {
	int i = 0;
	while(i < n) {
		scanf("%d", &v[i]);
		i++;
	}
}

void maiorElemento(int *v, int n, int *maior) {
	*maior = v[0];
	for(int i = 1; i < n; i++) {
		if(v[i] > *maior)
			*maior = v[i];
	}
}
