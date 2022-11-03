#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int contador=1;
   float nota, soma, media;
   while (contador <= 3)
   {
    printf("Digite a nota da %da prova: ", contador);
    scanf("%f", &nota);
    if (contador != 3)
    {
        soma += nota;
    }
    else
    {
        soma += (nota * 2);
    }
    contador++;
   }
   media = soma / 4;
   if (media >= 60)
   {
    printf("Parabens, voce foi aprovado com media de %.2f pontos!", media);
   }
   else 
   {
    printf("Infelizmente sua media foi de %.2f pontos e voce nao foi aprovado", media);
   }
   return 0;
}