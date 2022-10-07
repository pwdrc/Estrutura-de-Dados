#include<stdio.h>

void simplifica_fracao(int *num, int *den);

int main() {
	int numerador, denominador;
		
	while(!feof(stdin)) {
		scanf("%d %d", &numerador, &denominador);
		simplifica_fracao(&numerador, &denominador);
		printf("%d/%d\n", numerador, denominador);
	}

	return 0;
}

void simplifica_fracao(int *num, int *den) {
	if(*num >= *den) {
		for(int i = *den; i > 0; i--) {
			if(*num % i == 0 && *den % i == 0) {
				*num /= i;
				*den /=i;
			}
		}
	}
	else {
		for(int i = *num; i > 0; i--) {
			if(*num % i == 0 && *den % i == 0) {
				*num /= i;
				*den /=i;
			}
		}		
	}
}
