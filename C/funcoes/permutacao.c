#include<stdio.h>

int contadigitos(int n, int d);

int contadigitos(int n, int d) {
	int contador = 0;
	while (n > 0) {
		if(d == n%10)
			contador++;
		n = n/10;
	}
	return contador;
}

int main() {
	int num1, num2;
	int dNum1 = 0, dNum2 = 0;
	int algarismosNum1[9] = {0};
	int algarismosNum2[9] = {0};
	int flag = 0;

	scanf("%d %d", &num1, &num2);

// contar quantos algarismos tem os números digitados
// se forem diferentes, já descarta a possibilidade de permutação
// se iguais, criar uma matriz para cada e armazenar o valor de cada algarismo (de 1-9) que cada numero informado possui

	for(int i = 1; i < 10; i++) {
		dNum1 = dNum1 + contadigitos(num1, i);
		dNum2 = dNum2 + contadigitos(num2, i);
	}

	if(dNum1 != dNum2)
		printf("\nOs números não são permutacao entre si.\n");
	else {
		printf("\nOs números podem ser permutação...\nAguarde enquanto verifico...\n");

		for(int i = 1; i < 10; i++) {
			if(contadigitos(num1,i) == i)
				algarismosNum1[i]++;
			if(contadigitos(num2,i) == i)
				algarismosNum2[i]++;
		}
		for(int i = 1; i < 10; i++) {
			if(algarismosNum1[i] == algarismosNum2[i]){	
				printf("\nok...\n");
				flag = 1;
			}
			else {
				printf("ops...\n");
				printf("Não é permutação");
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1) {
		printf("\nPARABÉNS!!! É PERMUTAÇÃO\n\n");
	}


	return 0;
}
