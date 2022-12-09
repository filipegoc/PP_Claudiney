#include <stdio.h>
#include <string.h>

void main()
{
    char str[21];
    float preco;
    printf("Digite o nome da mercadoria: ");
    fgets(str, 21, stdin);
    fflush(stdin);
    printf("Digite o preco da mercadoria: ");
    scanf("%f", &preco);
    printf("Mercadoria: %s", str);
    printf("Valor total: R$ %.2f \n", preco);
    printf("Valor do desconto: R$ %.2f \n", preco/10);
    printf("Valor a ser pago a vista: R$ %.2f", preco-(preco/10));
}
