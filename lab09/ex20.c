int negativos(float *vet, int N){
    int negativo=0;
    for(int i=0; i<N; i++){
        if(*(vet+i) < 0){
            negativo++;
        }
    }
    return negativo;
}