// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>

void maiorElemento(int *v, int n, int *maior);
void lerVetor(int *v, int n);

int main() {
    
    int mel;
    int tamanho;

    scanf("%d", &tamanho);

     int vetor[tamanho];

    lerVetor(vetor, tamanho);
    maiorElemento(vetor, tamanho, &mel);
    printf("Maior elemento: %d\n\n", mel);
    
}

void lerVetor(int *v, int n) {

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

}


void maiorElemento(int *v, int n, int *maior) {
    int m = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > m) {
            m = v[i];
            *maior = m;
        }
    }
}
