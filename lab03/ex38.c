#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d, m, a, valido;
    printf("Digite sua data de nascimento (no formato dd/mm/aaaa) e vamos ver se ela eh valida: ");
    scanf("%d/%d/%d", &d, &m, &a);
    if(a<=2022)
    {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            if(d<=31)
            {
                valido=1;
            }
        }
        else if(m==4 || m==6 || m==9 || m==11)
        {
            if(d<=30)
            {
                valido=1;
            }
        }
        else if(m==2)
        {
            if((a%4==0 && a%100!=0) || (a%400==0))
            {
                if(d<=29)
                {
                    valido=1;
                }
                else if(d<=28)
                {
                    valido=1;
                }
            }
        }
        if(valido==1)
        {
            printf("Data valida.");
        }
        else{
            printf("Data invalida.");
        }
    }
    else
    {
        printf("Data invalida.");
    }
    return 0;
}