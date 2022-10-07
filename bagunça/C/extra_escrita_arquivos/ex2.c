#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAXSTR 40

int main() {

	char nome[MAXSTR], cargo[MAXSTR];
	int idade, salario;
	
	int minSal;
	char fileName[MAXSTR];
	scanf("%s %d", fileName, &minSal);

	FILE *fp;

	fp = fopen(fileName, "r");

	if(fp == NULL)
		printf("Este banco de dados não existe.\n");

	int numFunc;
	fscanf(fp, "%d", &numFunc);

	while(numFunc > 0) {
		fscanf(fp, "%s", nome);
		fscanf(fp, "%d", &idade);
		fscanf(fp, "%s", cargo);
		fscanf(fp, "%d", &salario);

		if(salario > minSal) {
			printf("\n%s", nome);
			printf("\n%d", idade);
			printf("\n%s", cargo);
			printf("\n%d\n", salario);
		}
	numFunc--;
	}

	fclose(fp);
	
}
