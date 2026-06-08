// Faça um programa para ler um número e apresentar o
// resultado das funções: ceil, floor, round e trunc

#include <stdio.h>
#include <math.h>

int main(){

    double numero, resultado;
    printf("Digite um numero: ");
    scanf("%lf", &numero);

    resultado = ceil(numero);
    printf("\nCeil: %lf", resultado);

    resultado = floor(numero);
    printf("\nFloor: %lf", resultado);

    resultado = round(numero);
    printf("\nRound: %lf", resultado);

    resultado = trunc(numero);
    printf("\nTrunc: %lf\n\n", resultado);

return 0;
}