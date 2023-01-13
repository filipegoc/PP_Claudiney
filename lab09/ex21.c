#include <stdio.h>

void soma1(int *vet, int valor);

void main() {
    int vet[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    soma1(vet, 1);
    for (int i = 0; i < 10; i++) {
        printf(i != 9 ? "%d, " : "%d.", vet[i]);
    }
}

void soma1(int *vet, int valor) {
    for (int i = 0; i < 10; i++) {
        *(vet + i) += valor;
    }
}