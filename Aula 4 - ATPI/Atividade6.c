// Faça um programa para ler um número inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>

int main(){

    int inteiro, sucessor, antecessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);
    sucessor = inteiro + 1;
    printf("O sucessor do numero e: %d \n", sucessor);
    antecessor = inteiro - 1;
    printf("O antecessor do numero e: %d \n", antecessor);

return 0;
}