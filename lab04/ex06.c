#include <stdio.h>

int main()
{
    int i=1, n;
    float m;
    while(i<=10)
    {
        printf("Digite o %do numero inteiro para media: ", i);
        scanf("%d", &n);
        m+=n;
        i++;
    }
    printf("A media deu %f", m/10);
    return 0;
}
