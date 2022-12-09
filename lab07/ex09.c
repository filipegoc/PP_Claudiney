#include <stdio.h>
#include <string.h>

void main()
{
    char carro[5][20];
    float consumo[5];
    float economico;
    int i, aux=0;
    for(i=0; i<5; i++){
        printf("Digite o %do carro: ", i+1);
        fgets(carro[i], 20, stdin);
    }
    for(i=0; i<5; i++){
        printf("Digite o cosumo em KM/L do %s ", carro[i]);
        scanf("%f", &consumo[i]);
    }
    
    economico = consumo[0];
    
    for(i=1; i<5; i++){
        if(economico <= consumo[i]){
            economico = consumo[i];
            aux = i;
        }
    }
    
    printf("O carro mais economico com eh o %s", carro[aux]);
    printf("Para percorrer 1000 km nele, sao necessarios %.2f litros de combustivel", 1000/economico);
}
