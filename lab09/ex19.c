void maiorDoVet(int *vet, int tam_vet){
    int vezes = 1, maior=*vet;
    for(int i=1; i<tam_vet; i++){
        if(*(vet + i) == maior){
            vezes++;
        }  
        if(*(vet + i) > maior){
            vezes = 1;
            maior = *(vet + i);
        }
    }
    printf("Maior: %d \nVezes: %d", maior, vezes);
}