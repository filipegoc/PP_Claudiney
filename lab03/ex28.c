#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int op;
    float n1, n2, n3;
    printf("Digite o numero da operacao voce quer fazer: \n");
    printf("    [1] Media Geometrica \n");
    printf("    [2] Media Ponderada \n");
    printf("    [3] Media Harmonica \n");
    printf("    [4] Media Aritmetica \n");
    printf("Opcao: ");
    scanf("%d", &op);
    if (op == 1)
    {
        printf("Digite tres valores para usarmos na Media Geometrica: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("A Media Geometrica eh %f", cbrt((n1*n2*n3)));
    }
    else if (op == 2)
    {
        printf("Digite tres valores para usarmos na Media Ponderada: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("A Media Ponderada eh %f", (n1 + n2*2 + n3*3)/6);
    }
    else if (op == 3)
    {
        printf("Digite tres valores para usarmos na Media Harmonica: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("A Media Harmonica eh %f", 1/(1/n1 + 1/n2 + 1/n2));
    }
    else if (op == 4)
    {
        printf("Digite tres valores para usarmos na Media Aritmetica: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("A Media Aritmetica eh %f", (n1+n2+n3)/3);
    }
    else
    {
        printf("Opcao invalida.");
    }
    return 0;
}
