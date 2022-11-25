#include <stdio.h>

void media(float x, float y, float z, char a);

int main()
{
    float n1, n2, n3;
    char letra;
    printf("Digite suas 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite 'A' para Media Aritmetica e 'P' para Media Ponderada: ");
    scanf(" %c", &letra);
    media(n1, n2, n3, letra);
    return 0;
}

void media(float x, float y, float z, char a){
    if(a=='A' || a=='a'){
        printf("A Media Aritmetica eh %.2f", (x+y+z)/3);
    }
    else if(a=='P' || a=='p'){
        printf("A Media Ponderada eh %.2f", (x*5+y*3+z*2)/10);
    }
    else{
        printf("Opcao Invalida!");
    }
}
