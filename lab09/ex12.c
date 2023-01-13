#include <stdio.h>

int crescente(int *a, int *b, int *c);

void main()
{
    int x, y, z, *px = &x, *py = &y, *pz = &z, valor;
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &x, &y, &z);
    valor = crescente(px, py, pz);
    printf("Valores: %d, %d, %d. ", *px, *py, *pz);
    printf(valor == 1 ? "Valores iguais." : "Valores diferentes.");
}

int crescente(int *a, int *b, int *c){
    int vet[3]= {*a, *b, *c}, aux;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        } 
    }
    *a = vet[0];
    *b = vet[1];
    *c = vet[2];
    if(*a==*b && *b==*c){
        return 1;
    }
    else{
        return 0;
    }
}