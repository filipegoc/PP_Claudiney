    #include <stdio.h>

    float dobro(float a){
        return a*2;
    }

    int main()
    {
        float num, numx2;
        printf("Digite um valor e vamos calcular seu dobro: ");
        scanf("%f", &num);
        numx2 = dobro(num);
        printf("O dobro de %f eh %f", num, numx2);   
        return 0;
    }
