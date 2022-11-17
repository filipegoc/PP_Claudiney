#include <stdio.h>

int main()
{
    int i;
    printf("1 a 100 com FOR: \n");
    for(i=1; i<=100; i++)
    {
        printf("%d \n",i);
    }
    printf("\n1 a 100 com WHILE: \n");
    i=1;
    while(i<=100)
    {
        printf("%d \n", i);
        i++;
    }
    i=1;
    printf("\n1 a 100 com DO-WHILE: \n");
    do
    {
        printf("%d \n", i);
        i++;
    }
    while(i<=100);
    return 0;
}
