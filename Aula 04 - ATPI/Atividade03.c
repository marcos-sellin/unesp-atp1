// Faça um programa que pela ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main(){

    int inteiro1, inteiro2, inteiro3, soma;
    printf("Digite um numero inteiro (1/3): ");
    scanf("%d", &inteiro1);
    printf("Digite um numero inteiro (2/3): ");
    scanf("%d", &inteiro2);
    printf("Digite um numero inteiro (3/3): ");
    scanf("%d", &inteiro3);
    soma = inteiro1 + inteiro2 + inteiro3;
    printf("A soma dos inteiros e: %d \n", soma);

return 0;
}