#include <stdio.h>
#include <stdlib.h>

int main(){
 int i, j, a, b, soma=0, primo=0;
     for(i=1; i<2000000; i++){
       primo=1;
       for(j = 2; j <= i; j++) {
           if(((i % j) == 0) && (j != i)){
               primo = 0;
               break;
           }
       }
       if(primo!=0 && i!=1){
           soma+=i;
       }
     }
   printf("A soma de todos numeros primos menores que 2000000 eh %d", soma);
 return 0;
}