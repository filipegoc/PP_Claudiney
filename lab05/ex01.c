float dobro(float a);

int main()
    {
        float num, numx2;
        printf("Digite um valor e vamos calcular seu dobro: ");
        scanf("%f", &num);
        numx2 = dobro(num);
        printf("O dobro de %.2f eh %.2f", num, numx2);   
        return 0;
    }
    
float dobro(float a){
    return a*2;
}
