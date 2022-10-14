// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void juntaVet(int *v1, int *v2, int *v3);
int comp (const void *elem1, const void *elem2);

int main() {
    
    srand(time(NULL));

    int vet1[1000];
    int vet2[1000];

    for(int i = 0; i < 1001; i++) {
        vet1[i] = rand() % 1001;
        vet2[i] = rand() % 1001;
    }

    int vet3[2000];

    juntaVet(vet1, vet2, vet3);
    
    qsort(vet3, 2000, sizeof(int), comp);

    for(int i = 0; i < 2000; i++) {
        printf(" %d ", vet3[i]);
    }

    printf("\n");

}

void juntaVet(int *v1, int *v2, int *v3) {

    for(int i = 0; i < 1001; i++) {
        v3[i] = v1[i];
    }

    for(int i = 0; i < 1001; i++) {
        v3[1001+i] = v2[i];
    }

}

int comp (const void *elem1, const void *elem2) {
    return *(int*)elem1 - *(int*)elem2;
}