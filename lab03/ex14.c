#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3, media;
    printf("Digite sua nota do trabalho de laboratorio: ");
    scanf("%f", &n1);
    printf("Digite sua nota da prova semestral: ");
    scanf("%f", &n2);
    printf("Digite sua nota da prova final: ");
    scanf("%f", &n3);
    if (n1 < 0 || n2 < 0 || n3 < 0 || n1 > 10 || n2 > 10 || n3 > 10)
    {
        printf("Nota invalida");
    }
    else
    {
        media = (n1*2 + n2*3 + n3*5) / 10;
        if (media >= 0 && media < 3)
        {
            printf("Sua media foi de %f pontos e voce esta reprovado", media);
        }
        else if(media >= 3 && media < 5)
        {
            printf("Sua media foi de %f pontos e voce esta de recuperacao", media);
        }
        else
        {
            printf("Sua media foi de %f pontos e voce esta aprovado", media);
        }
    }
    return 0;
}