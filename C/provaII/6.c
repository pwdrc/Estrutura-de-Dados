// Pedro Guilherme Tolvo
// 10492012

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void juntaVet(int v1[1000], int v2[1000], int *v3);
int comp (const void * elem1, const void * elem2);

int main() {
    
    srand(time(NULL));

    int vet1[1000];
    int vet2[1000];

    for(int i = 0; i < 1001; i++) {
        vet1[i] = i;
        vet2[i] = i;
    }

    int vet3[2000];

    juntaVet(vet1, vet2, &vet3);

}

void juntaVet(int v1, int v2, int *v3) {

    int compara;

    for(int i = 0; i < 1001; i++) {
        *v3[i] = v1[i];
    }

    for(int i = 0; i < 1001; i++) {
        *v3[1001+i] = v1[i];
    }

    qsort (&v3, sizeof(v3)/sizeof(*v3), sizeof(*v3), comp);

}

int comp (const void * elem1, const void * elem2) {
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}