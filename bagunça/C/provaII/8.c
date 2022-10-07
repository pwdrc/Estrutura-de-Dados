// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>

int contaDigitos(int n, int d);

int contaDigitos(int n, int d) {
	int contador = 0;
	if(d < 0 || d > 9)
		return -1;

	else {
		while (n > 0) {
			if(d == n%10)
				contador++;
			n = n/10;
		}
		return contador;
	}
}

int main() {
	int a, b;
	int c;

	scanf("%d %d", &a, &b);

	c = contaDigitos(a, b);
	if(c == -1)
		printf("O valor do dígito deve ser maior do que zero e menor do que nove.");
	else 
	printf("\n%d\n", c);
}