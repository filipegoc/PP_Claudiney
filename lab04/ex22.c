#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=999, j, n, t, ni, im, jm, mnc = 0;
    for(n=i*i; n>mnc; n=i*i){
        for(j=i; n>mnc; n=i*j){
            ni=0;
            for(t=n; t>0; t/=10){
                ni=ni*10+t%10;
            }
            if (n==ni) {
                    mnc=n;
                    im=i;
                    jm=j;
            }
            j--;
        }
        i--;
    }
    printf("O maior numero palindromo de 3 digitos eh: %d. Os numeros multiplicados foram %d x %d\n", mnc, im, jm);
    return 0;
}
