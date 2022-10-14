#include<stdio.h>
#include<math.h>
#include<locale.h>

int raiz(float a, float b, float c, float *x1, float *x2);
int raiz(float a, float b, float c, float *x1, float *x2) {

	int delta = b*b - 4*a*c;

	if(delta < 0)
		return -1;

	*x1 = (-b + sqrt(delta))/(2*a);
	*x2 = (-b - sqrt(delta))/(2*a);

	if(delta == 0)
		return 0;

	else return 1;
}

int main() {
	float a, b, c, raiz1, raiz2, tem;

	printf("Sendo uma equação do segundo grau do tipo:\n ax2 + bx + c = 0\ninforme os valores de a, b e c, respectivamente:\n");
	scanf("%f %f %f", &a, &b, &c);

	tem = raiz(a, b, c, &raiz1, &raiz2);

	if(tem == 0) {
		printf("A equação informada tem apenas uma única raiz real:\n");
		printf("x = %f\n", raiz1);
	}

	if(tem < 0)
		printf("A equação não tem raiz real.");

	else {
		printf("As raízes da equação são:\n");
		printf("x = %f ou x = %f", raiz1, raiz2);
	}
}
