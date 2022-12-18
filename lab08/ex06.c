#include <stdio.h>
#include <string.h>

struct funcionario{
    char nome[101], sexo, cpf[20], cargo[30];
    int idade, dia, mes, ano, codSetor;
    float salario;
};

void main()
{
    struct funcionario f;
    printf("Digite seu nome: ");
    fgets(f.nome, 101, stdin);
    setbuf(stdin, NULL);
    printf("Digite sua idade: ");
    scanf("%d", &f.idade);
    setbuf(stdin, NULL);
    printf("Digite seu sexo (M/F): ");
    scanf("%c", &f.sexo);
    setbuf(stdin, NULL);
    printf("Digite seu CPF: ");
    fgets(f.cpf, 20, stdin);
    setbuf(stdin, NULL);
    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &f.dia, &f.mes, &f.ano);
    setbuf(stdin, NULL);
    printf("Digite o codigo do setor onde trabalha: ");
    scanf("%d", &f.codSetor);
    setbuf(stdin, NULL);
    printf("Digite seu cargo na empresa: ");
    fgets(f.cargo, 30, stdin);
    setbuf(stdin, NULL);
    printf("Digite seu salario: ");
    scanf("%f", &f.salario);
    printf("\n\nOS DADOS CADASTRADOS FORAM: ");
    printf("\n\tNome: %s", f.nome);
    printf("\tIdade: %d", f.idade);
    printf("\n\tSexo: %c", f.sexo);
    printf("\n\tCPF: %s", f.cpf);
    printf("\tData de nascimento: %d/%d/%d", f.dia, f.mes, f.ano);
    printf("\n\tCodigo do setor: %d", f.codSetor);
    printf("\n\tCargo: %s", f.cargo);
  