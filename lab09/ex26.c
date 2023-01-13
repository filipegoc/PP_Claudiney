#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2);

void main() {
    float a, b, c, x1, x2;
    int raizes_reais;
    printf("Digite o valor de a, b e c da equacao de segundo grau: ");
    scanf("%f %f %f", &a, &b, &c);
    raizes_reais = raizes(a, b, c, &x1, &x2);
    if (raizes_reais == 0) {
        printf("Não existem raízes reais.\n");
    } else if (raizes_reais == 1) {
        printf("Existe uma raiz real: %f\n", x1);
    } else {
        printf("Existem duas raízes reais: %f e %f\n", x1, x2);
    }
}

int raizes(float a, float b, float c, float *x1, float *x2) {
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1;
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}