#include <stdio.h>

int main()
{
    int i=1;
    float s=0, n;
    while(i<=10)
    {
        printf("Digite o %do numero para soma: ", i);
        scanf("%f", &n);
        s+=n;
        i++;
    }
    printf("A soma total eh %f", s);
    return 0;
}