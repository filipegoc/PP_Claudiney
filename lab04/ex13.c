#include <stdio.h>

int main()
{
    int i, s=0;
    for(i=1; i<1000; i++)
    {
        if(i%3==0 || i%5==0)
        {
            s+=i;
        }
    }
    printf("A soma de todos numeros naturais multiplos de 3 e 5 abaixo de 1000 eh %d", s);
    return 0;
}