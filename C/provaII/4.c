// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// void marcaMatL();
// void imprimeCaminho();

int main() {
    
    int i = 11;
    int j = 6;
    int matL[i][j];

    srand(time(NULL));
    

    // Gerar matriz aleatória de 0 e -1
    for(int x = 0; x < i; x++) {
        for(int y = 0; y < j; i++) {
            matL[x][y] = ((rand() % 1) - 1);
        }
    }

    typedef ponto {
        int pX;
        int pY;
    } ponto;

    ponto A;
    ponto B;

    printf("Coordenadas do ponto A: ");
    scanf("%d %d", &A.pX, &A.pY);

    printf("Coordenadas do ponto B: ");
    scanf("%d %d", &B.pX, &B.pY);

    int distancia;

    if (A.pX == B.pX && A.pY == B.pY) {
        distancia = 0;
        printf("A distância entre A e B é: %d", distancia);
    }

    else {

        char caminho[3];
        for(int x = A.pX; x < i; x++) {
            for(int y = A.pY; y < j; y++) {
                if(matL[x][y])
            }
        }
    }
}