#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct cartas{
    char naipeC[10], valorC[10];
    int valor, naipe;
};

struct pessoas{
    struct cartas c[3];
};

void main()
{   
    srand(time(NULL));
    // Valete, dama e rei terão valor 11, 12 e 13, respectivamente.
    // Paus, Copas, Espadas e Ouros terão valor 1, 2, 3 e 4 respectivamente.
    struct pessoas p[2];
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            p[i].c[j].valor = 1 + ( rand() % 13 );
            p[i].c[j].naipe = 1 + ( rand() % 4 );
            
            if(p[i].c[j].valor == 1){
               strcpy(p[i].c[j].valorC, "As "); 
            }
            else if(p[i].c[j].valor == 11){
                strcpy(p[i].c[j].valorC, "Valete ");  
            }
            else if(p[i].c[j].valor == 12){
                strcpy(p[i].c[j].valorC, "Dama ");
            }
            else if(p[i].c[j].valor == 13){
                strcpy(p[i].c[j].valorC, "Rei ");
            }
            
            if(p[i].c[j].naipe == 1){
                strcpy(p[i].c[j].naipeC, "de paus");
            }
            else if(p[i].c[j].naipe == 2){
                strcpy(p[i].c[j].naipeC, "de coracoes");
            }
            else if(p[i].c[j].naipe == 3){
                strcpy(p[i].c[j].naipeC, "de espadas");
            }
            else if(p[i].c[j].naipe == 4){
                strcpy(p[i].c[j].naipeC, "de ouros");
            }
        }
    }
    printf("--TRUCO GOIANO--\n\n");
    for(i=0; i<2; i++){
        printf("CARTAS JOGADOR %d: \n", i+1);
        for(j=0; j<3; j++){
            if((p[i].c[j].valor == 1) || (p[i].c[j].valor == 11) || (p[i].c[j].valor == 12) || (p[i].c[j].valor == 13)){
                printf("\t%s", p[i].c[j].valorC);
            }
            else{
                printf("\t%d ", p[i].c[j].valor); 
            }
            printf("%s", p[i].c[j].naipeC);
            printf("\n");
        }
        printf("\n");
    }
}
