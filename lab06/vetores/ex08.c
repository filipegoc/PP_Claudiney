#include<stdio.h>

void main(){
	int i, j;
	int vetor[10]; 
	for(i=0;i<10;i++){
        printf("Digite o %do valor do vetor: ", i+1);
    	scanf("%d", &vetor[i]);
    	for(j=0;j<i; j++){
    	    if(vetor[i]==vetor[j]){
    		    printf("\nNumero repetido, digite outro.\n");
    		    i--;
    		    continue;
    	   }
    	}
    }
    
    printf("Os valores do vetor sao: ");
    for(i=0;i<10;i++){
    	printf(i!=9 ? "%d, " : "%d." , vetor[i]);
    }
}
