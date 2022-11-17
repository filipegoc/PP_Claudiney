#include <stdio.h>    
    
int main()
{
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
    printf("Qual valor voce deseja sacar? ");
    scanf("%d", &valor);
    cem=valor/100;
    valor%=100;
    cinquenta=valor/50;
    valor%=50;
    vinte=valor/20;
    valor%=20;
    dez=valor/10;
    valor%=10;
    cinco=valor/5;
    valor%=5;
    dois=valor/2;
    valor%=2;
    um=valor/1;

    printf("Notas R$100,00 = %d \n",cem);
    printf("Notas R$ 50,00 = %d \n",cinquenta);
    printf("Notas R$ 20,00 = %d \n",vinte);
    printf("Notas R$ 10,00 = %d \n",dez);
    printf("Notas R$  5,00 = %d \n",cinco);
    printf("Notas R$  2,00 = %d \n",dois);
    printf("Notas R$  1,00 = %d",um);
    return 0;
}