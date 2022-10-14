#include<stdio.h>
#include<stdlib.h>

int main() {

	int read;
	int sum = 0;

	char fileName[100];
	scanf("%s",fileName);

	FILE *fp;

	fp = fopen(fileName, "r");

	if(fp == NULL) {
		printf("Houve um erro ao abrir o arquivo\n");
		exit(0);
	}
	
	while(!feof(fp)) {
		fscanf(fp, "%d",&read);
		sum = read + sum;
	}

	sum = sum - read;
	
	printf("%d\n", sum);
	
}
