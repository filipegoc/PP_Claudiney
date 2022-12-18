#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[20], bairro[20], cidade[20], estado[20], cep[20];   
};

struct cadastro{
    struct endereco e;
    char nome[50], identidade[15], cpf[15], estadoCivil[15], telefone[15], sexo[10];
    float salario;
    int idade;
};

void main(){
    struct cadastro c[5];
    int i, maiorIdade=0, supMaiorIdade=0, masculino=0, salarioMaior1000=0, busc=0;
    char busca[15];
    for(i=0; i<5; i++){
        printf("Pessoa %d: \n", i+1);
        printf("\tnome: ");
        fgets(c[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        printf("\trua: ");
        fgets(c[i].e.rua, 20, stdin);
        setbuf(stdin, NULL);
        printf("\tbairro: ");
        fgets(c[i].e.bairro, 20, stdin);
        setbuf(stdin, NULL);
        printf("\tcidade: ");
        fgets(c[i].e.cidade, 20, stdin);
        setbuf(stdin, NULL);
        printf("\testado: ");
        fgets(c[i].e.estado, 20, stdin);
        setbuf(stdin, NULL);
        printf("\tcep: ");
        fgets(c[i].e.cep, 20, stdin);
        setbuf(stdin, NULL);
        printf("\tsalario: ");
        scanf("%f", &c[i].salario);
        setbuf(stdin, NULL);
        printf("\tidentidade: ");
        fgets(c[i].identidade, 15, stdin);
        setbuf(stdin, NULL);
        printf("\tcpf: ");
        fgets(c[i].cpf, 15, stdin);
        setbuf(stdin, NULL);
        printf("\testado civil: ");
        fgets(c[i].estadoCivil, 15, stdin);
        setbuf(stdin, NULL);
        printf("\ttelefone: ");
        fgets(c[i].telefone, 15, stdin);
        setbuf(stdin, NULL);
        printf("\tsexo: ");
        fgets(c[i].sexo, 10, stdin);
        setbuf(stdin, NULL);
        printf("\tidade: ");
        scanf("%d", &c[i].idade);
        setbuf(stdin, NULL);
        
        if(maiorIdade<c[i].idade){
            maiorIdade = c[i].idade;
            supMaiorIdade = i;
        }
    }
    printf("\nA pessoa mais velha tem %d anos e chama %s", maiorIdade, c[supMaiorIdade].nome);
    printf("Pessoas do sexo masculino: ");
    for(i=0; i<5; i++){
        if(strcmp(c[i].sexo, "masculino") == 10){
            printf("\t%s", c[i].nome);
            masculino++;
        }
    }
    if(masculino == 0){
        printf("Nao ha\n");
    }
    printf("Pessoas com salario maior que R$ 1000: ");
    for(i=0; i<5; i++){
        if(c[i].salario > 1000){
            printf("\t%.2f", c[i].salario);
            salarioMaior1000++;
        }
    }
    if(salarioMaior1000 == 0){
        printf("Nao ha\n");
    }
    for( ; strcmp(busca, "") !=10 ; ){
        busc = 0;
        printf("\nDigite uma identidade: ");
        fgets(busca, 15, stdin);
        setbuf(stdin, NULL);
        for(i=0; i<5; i++){
            if(strcmp(busca, c[i].identidade) == 0){
                printf("\tnome: %s", c[i].nome);
                printf("\trua: %s", c[i].e.rua);
                printf("\tbairro: %s", c[i].e.bairro);
                printf("\tcidade: %s", c[i].e.cidade);
                printf("\testado: %s", c[i].e.estado);
                printf("\tcep: %s", c[i].e.cep);
                printf("\tsalario: %.2f", c[i].salario);
                printf("\tidentidade: %s", c[i].identidade);
                printf("\tcpf: %s", c[i].cpf);
                printf("\testado civil: %s", c[i].estadoCivil);
                printf("\ttelefone: %s", c[i].telefone);
                printf("\tsexo: %s", c[i].sexo);
                printf("\tidade: %d", c[i].idade);
                busc++;
            }
        }
        if(busc == 0){
            printf("Identidade nao cadastrada\n");
        }
    }
}