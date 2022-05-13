#include<stdio.h>

int fatorial(int num) {
	int calc = 1;
	
	for(int i = num; i > 0; i--) {
		calc *= i;
	}
	return calc;
}

int main() {
	int m, n, numerador, denominador;
	float resultado;

	scanf("%d %d", &m, &n);

	numerador = fatorial(m);
	denominador = fatorial(n)*fatorial(m-n);
	printf("%d %d\n", numerador, denominador);

	resultado = numerador/denominador;

	printf("%f\n", resultado);
}
