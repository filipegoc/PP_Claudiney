#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20], str2[20], c1, c2, substring[20];
    int i, count = 0, pos, tam, op;
    do{
    printf("--MENU--\n");
    printf("1. Ler uma string S1 (tamanho máximo 20 caracteres)\n");
    printf("2. Imprimir o tamanho da string S1\n");
    printf("3. Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação\n");
    printf("4. Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação\n");
    printf("5. Imprimir a string S1 de forma reversa\n");
    printf("6. Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário\n");
    printf("7. Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário\n");
    printf("8. Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário\n");
    printf("9. Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring\n");
    printf("Opcao: ");
    scanf(" %d", &op);
    setbuf(stdin, NULL);
    switch (op){
        case 1:
            printf("\nDigite a 1a string: \n");
            fgets(str1, 20, stdin);
            setbuf(stdin, NULL);
            break;
        case 2:
            tam = strlen(str1);
            printf("O tamanho da string S1 é %d\n", tam);
            break;
        case 3:
            printf("\nDigite a string S2: ");
            fgets(str2, 20, stdin);
            setbuf(stdin, NULL);
            printf(strcmp(str1, str2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
            break;
        case 4:
            printf("\nDigite a string S2: ");
            fgets(str2, 20, stdin);
            setbuf(stdin, NULL);
            printf("O resultado da concatenação é \"%s\"\n", strcat(str1, str2));
            break;
        case 5:
            for (i = strlen(str1) - 1; i >= 0; i--){
                printf("%c", str1[i]);
            }
            printf("\n");
            break;
        case 6:
            printf("\nDigite o caractere: ");
            scanf(" %c", &c1);
            setbuf(stdin, NULL);
            for (i = 0; str1[i] != '\0'; i++){
                if (str1[i] == c1){
                    count++;
                }
            }
            printf("\nO caractere %c aparece %d vezes na string S1\n", c1, count);
            break;
        case 7:
            printf("\nDigite o caractere C1: ");
            scanf(" %c", &c1);
            setbuf(stdin, NULL);
            printf("\nDigite o caractere C2: ");
            scanf(" %c", &c2);
            for (i = 0; str1[i] != '\0'; i++){
                if (str1[i] == c1){
                str1[i] = c2;
                break;
                }
            }
            printf("A string S1 agora é %s\n", str1);
            break;
        case 8:
            printf("\nDigite a string S2: ");
            fgets(str2, 20, stdin);
            setbuf(stdin, NULL);
            if (strstr(str1, str2) != NULL){
                printf("A string S2 é substring de S1\n");
            }
            else{
                printf("A string S2 não é substring de S1\n");
            }
            break;
        case 9:
            printf("\nDigite a posição: ");
            scanf("%d", &pos);
            setbuf(stdin, NULL);
            printf("\nDigite o tamanho: ");
            scanf("%d", &tam);
            setbuf(stdin, NULL);
            for (i = pos; i <= tam; i++){
                substring[i] = str1[pos + i];
            }
            substring[i + 1] = '\0';
            printf("A substring é %s\n", substring);
            break;
    }
  } while (op >= 1 || op <= 9);
}