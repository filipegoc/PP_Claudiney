#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int semAumento=0, semBonus=0;
 float salario, tempo;
 printf("Digite o valor do seu salario atual: ");
 scanf("%f", &salario);
 printf("Digite seu tempo de servico na empresa: ");
 scanf("%f", &tempo);
 if (salario<=500 && salario>0)
 {
    salario*=1.25;
 }
 else if (salario<=1000 && salario>500)
 {
    salario*=1.2;
 }
 else if (salario<=1500 && salario>1000)
 {
    salario*=1.15;
 }
 else if (salario<=2000 && salario>1500)
 {
    salario*=1.1;
 }
 else
 {
    semAumento=1;
 }
 
 if(tempo>=1 && tempo<4)
 {
    salario+=100;
 }
 else if(tempo>=4 && tempo<7)
 {
    salario+=200;
 }
 else if(tempo>=7 && tempo<10)
 {
    salario+=300;
 }
 else if(tempo>=10)
 {
    salario+=500;
 }
 else
 {
    semBonus=1;
 }
 
 if(semAumento==1 && semBonus==1)
 {
    printf("Voce nao tem direito a nenhum aumento e seu salario continuara o mesmo.");
 }
 else
 {
    printf("Apos o reajuste, seu salario eh R$ %.2f", salario);
 }
 printf("%d %d", semAumento, semBonus);
return(0);
}