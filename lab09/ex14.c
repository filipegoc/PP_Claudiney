#include <stdio.h>

void preenche(int *vet, int valor);

void main() {
  int vet[10];

  preenche(vet, 1);

  for (int i = 0; i < 10; i++) {
    printf(i != 9 ? "%d, " : "%d.", vet[i]);
  }
}

void preenche(int *vet, int valor) {
    for (int i = 0; i < 10; i++) {
        *(vet + i) = valor;
    }
}