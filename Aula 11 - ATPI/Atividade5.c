// Faça um programa para ler um inteiro positivo e verificar se ele é primo.
// Sabendo que um número primo é aquele que é dividido apenas por um e por ele
// mesmo.

#include <stdio.h>

int main(){

    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if(numero == 0 || numero == 1){
        printf("O numero nao e primo \n");
        return 0;
    }

    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            printf("O numero nao e primo \n");
            return 0;
        }
    }

    printf("O numero e primo");

return 0;
}