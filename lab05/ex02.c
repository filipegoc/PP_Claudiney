#include <stdio.h>

int dataExtensa(int d, int m, int a){
    if(m==1){
        printf("%d de janeiro de %d", d, a);
    }
    if(m==2){
        printf("%d de fevereiro de %d", d, a);
    }
    if(m==3){
        printf("%d de marco de %d", d, a);
    }
    if(m==4){
        printf("%d de abril de %d", d, a);
    }
    if(m==5){
        printf("%d de maio de %d", d, a);
    }
    if(m==6){
        printf("%d de junho de %d", d, a);
    }
    if(m==7){
        printf("%d de julho de %d", d, a);
    }
    if(m==8){
        printf("%d de agosto de %d", d, a);
    }
    if(m==9){
        printf("%d de setembro de %d", d, a);
    }
    if(m==10){
        printf("%d de outubro de %d", d, a);
    }
    if(m==11){
        printf("%d de novembro de %d", d, a);
    }
    if(m==12){
        printf("%d de dezembro de %d", d, a);
    }
}

int main()
{
    int dia, mes, ano, extenso;
    printf("Digite uma data (dd/mm/aaaa) e vamos exibi-la por extenso: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    extenso= dataExtensa(dia, mes, ano);
    return 0;
}