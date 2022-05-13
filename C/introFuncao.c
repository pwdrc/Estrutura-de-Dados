#include<stdio.h>

float potencia(float base, int expoente) {
	float pot = 1;

	for(int i = 0; i < expoente; i++) {
		pot = pot * base;
	}
	return pot;
}

int main() {
	float x, y, potx, poty, potxy, soma;
	int a, b;

	printf("Entre com dois valores reais:");
	scanf("%f %f", &x, &y);

	printf("Entre com dois valores inteiros:");
	scanf("%d %d", &a, &b);

	potx = potencia(x,a);
	poty = potencia(y,b);
	potxy = potencia(x-y,a+b);
	soma = potx + poty + potxy;

	printf("%f\n", soma); 
}
