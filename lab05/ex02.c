#include <stdio.h>

void dataExtensa(int m);

int main()
{
    int dia, mes, ano, extenso;
    printf("Digite uma data (dd/mm/aaaa) e vamos exibi-la por extenso: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("%d de ", dia);
    dataExtensa(mes);
    printf(" de %d", ano);
    return 0;
}

void dataExtensa(int m){
    switch(m){
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
    }
}
