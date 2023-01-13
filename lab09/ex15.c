void imprimeVetor(int *vet, int tam){
    for(int i=0; i<tam; i++){
        printf(i != tam-1 ? "%d, " : "%d.", (*(array + i)));
    }
}