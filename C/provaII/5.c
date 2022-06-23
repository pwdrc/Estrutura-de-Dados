// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>

void maiorElemento(int *v, int n, int *maior);
void lerVetor(int *v, int n);

int main() {
    
    int *mel = 0;
    int tamanho;

    scanf("%d", &tamanho);

     int *vetor;

    lerVetor(vetor, tamanho);
    maiorElemento(vetor, tamanho, mel);
    printf("Maior elemento: %d\n\n", mel);
    
}

void lerVetor(int *v, int n) {

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

}


void maiorElemento(int *v, int n, int *maior) {

    for(int i = 0; i < n; i++) {
        if(v[i] > *maior)
            *maior = v[i];
    }

}
