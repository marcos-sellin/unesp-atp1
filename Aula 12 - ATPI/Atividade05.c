// Faça um programa para ler os valores de a, b e c de uma equação do
// 2o grau. Em seguida, ele deverá calcular as raízes da equação.

#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, delta, x1, x2;

    printf("CALCULADORA DE EQUACAO DO 2 GRAU\n\n");
    printf("Informe o valor de A: ");
    scanf("%lf", &a);
    printf("Informe o valor de B: ");
    scanf("%lf", &b);
    printf("Informe o valor de C: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0){

        printf("\nNao ha raizes reais (delta < 0)\n");

    }else{

        printf("\nO valor de delta e: %lf", delta);
        x1 = -b + sqrt(delta) / 2 * a;
        x2 = -b - sqrt(delta) / 2 * a;
        printf("\nX1: %lf", x1);
        printf("\nX2: %lf\n\n", x2);

    }

return 0;
}