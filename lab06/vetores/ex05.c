#include <stdio.h>

void main()
{
    int i; 
    float vetor[50];
    for(i=0; i<50; i++){
        vetor[i] = (i+5*i)%(i+1);
    }
    for(i=0; i<50; i++){
        printf(i==49 ? "%.f." : "%.f, ", vetor[i]);
    }
}