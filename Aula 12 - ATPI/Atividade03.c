// Faça um programa para ler um número e apresentar a raiz
// quadrada do número

#include <stdio.h>
#include <math.h>

int main(){

    double numero, raiz;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    raiz = sqrt(numero);

    printf("\nA raiz do numero e: %lf", raiz);

return 0;
}