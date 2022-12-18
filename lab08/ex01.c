#include <stdio.h>
#include <string.h>

struct horario{
    float hora, minuto, segundo;  
};

struct data{
  int dia, mes, ano;  
};

struct compromisso{
    struct horario h;
    struct data d;
    char texto[101];
};

void main()
{
    struct compromisso comp;
    printf("Digite o horario do compromisso (hh:mm:ss): ");
    scanf("%f:%f:%f", &comp.h.hora, &comp.h.minuto, &comp.h.segundo);
    printf("Digite a data do compromisso (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &comp.d.dia, &comp.d.mes, &comp.d.ano);
    setbuf(stdin, NULL);
    printf("Descreva o compromisso em até 100 palavras: ");
    fgets(comp.texto, 101, stdin);
    printf("\n\n-------COMPROMISSO-------");
    printf("\nData: %d/%d/%d", comp.d.dia, comp.d.mes, comp.d.ano);
    printf("\nhorario: %.0f:%.0f:%.0f", comp.h.hora, comp.h.minuto, comp.h.segundo);
    printf("\nDescricao: %s", comp.texto);
}