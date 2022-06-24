// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>

int main() {
    
    typedef struct {
        int x;
        int y;
    } ponto;

    ponto ponto1;
    ponto ponto2;

    scanf("%d %d", &ponto1.x, &ponto1.y);
    scanf("%d %d", &ponto2.x, &ponto2.y);

    int a, b, c;

    a = ponto1.y - ponto2.y;
    b = ponto1.x - ponto2.x;
    c = ponto1.x * ponto2.y - ponto2.x * ponto1.y;

    printf("Equacao da reta:\n");
    printf("%dx + %dy + %d = 0\n", a, b, c);
    printf("Portanto:\n");
    if(b != 0)
        printf("y = (%dx + %d)/%d\n", a, c, b);
    else printf("Nao sabo dividir pro zero, meu bacano...");
}