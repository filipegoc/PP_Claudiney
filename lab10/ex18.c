#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro{
    char nome[30];
    int cod;
    float preco;
};

void main()
{
    int *vet, **mat, i;
    char **string;
    struct registro *r;
    
    vet = (int*) malloc(8192);
    mat = (int**) malloc(10*sizeof(int));
    for(i=0; i<10; i++){
        mat[i] = (int*) malloc(10*sizeof(int));
    }
    r = (struct registro*) malloc(50*sizeof(struct registro));
    string = (char**) malloc(100*sizeof(char));
    for(i=0; i<10; i++){
        string[i] = (char*) malloc(80*sizeof(char));
    }
}