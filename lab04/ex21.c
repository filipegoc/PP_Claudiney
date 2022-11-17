#include <stdio.h>
#include <stdlib.h>

int main(){
 int i, j, a, b, total=0, primo=0, invalido=0;
    printf("Digite dois numeros e vamos ver quantos numeros primos estao entre eles: ");
    scanf("%d %d", &a, &b);
    if(a>=0 && a<b){
     for(i=a+1; i<b; i++){
       primo=1;
       for(j = 2; j <= i; j++) {
           if(((i % j) == 0) && (j != i)){
               primo = 0;
               break;
           }
       }
       if(primo!=0 && i!=1){
           total++;
       }
     }
   } else{
        printf("Numero invalido.");
        invalido=1;
   }
   if(!invalido){
        printf("Ha %d numeros primos entre %d e %d", total, a, b);
   }
 return 0;
}
