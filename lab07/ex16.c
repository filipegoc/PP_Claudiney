#include <stdio.h>
#include <string.h>

void main()
{  
    char str[500];
    int i, j, produto, produtoMaximo=0;
    fgets(str, 500, stdin); 
    for (i = 0; str[i + 4] != '\0' && str[i + 4] != '\n'; i++){
        produto = 1;
        for (j = i; j < i + 5; j++){
            produto *= (str[j] - 48);
        }
        if (produto > produtoMaximo){
            produtoMaximo = produto;
        }
    }
    printf("O maior produto é %d\n", produtoMaximo); 
}