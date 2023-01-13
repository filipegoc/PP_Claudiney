#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100];
    printf("Digite a string 1: ");
    fgets(str1, 100, stdin);
    setbuf(stdin, NULL);
    printf("Digite a string 1: ");
    fgets(str2, 100, stdin);
    setbuf(stdin, NULL);
    if(substring(str1, str2) == 10){
        printf("Eh substring\n");
    } 
    else{ 
        printf("Nao eh substring\n");
    }
}

int substring(char *a, char *b) {
  int inicio = 0;

  for (int i = 0; *(a + i) != '\n' ; i++) {
        if (*(b + inicio) == '\n') {
            return 1;
        }
        
        if (*(a + i) == *(b + inicio)) {
            inicio++;
        } 
        else {
            inicio = 0;
        }
    }
}