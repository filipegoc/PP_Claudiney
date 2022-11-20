#include <stdio.h>

int media(float x, float y, float z, char a){
    if(a=='A' || a=='a'){
        return printf("A Media Aritmetica eh %.2f", (x+y+z)/3);
    }
    if(a=='P' || a=='p'){
        return printf("A Media Ponderada eh %.2f", (x*5+y*3+z*2)/10);
    }
    else{
        return printf("Opcao Invalida!");
    }
}

int main()
{
    float n1, n2, n3, mediaFinal;
    char letra;
    printf("Digite suas 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite 'A' para Media Aritmetica e 'P' para Media Ponderada: ");
    scanf(" %c", &letra);
    mediaFinal= media(n1, n2, n3, letra);
    return 0;
}