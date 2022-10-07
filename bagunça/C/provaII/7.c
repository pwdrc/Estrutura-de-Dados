// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>

int **ler_matriz();
int subtrai_matrizes();
void imprimir_matriz();
void liberar_matriz();

int main() {
    
   ler_matriz(3, 3);
   ler_matriz(3, 3);

    

}

int **ler_matriz(int linhas, int colunas) {
 
   int *matriz = malloc(linhas * sizeof(int));
 
    for(int i = 0; i < linhas; i++){
        matriz[i] = malloc(colunas * sizeof(int));
    }
 
 
      for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
 
    }
 
    return matriz;
 
}