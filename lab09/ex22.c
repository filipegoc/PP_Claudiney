int somaVetores(int *vet1, int *vet2, int tam_vet1, int tam_vet2){
    if(tam_vet1 == tam_vet2){
        int vet3[tam_vet1];
        for(int i=0; i< tam_vet1; i++){
            *(vet3 + i) = *(vet1 + i) + *(vet2 + i);
        }
        return *vet3;
    }
    else{
        return 0;
    }
}