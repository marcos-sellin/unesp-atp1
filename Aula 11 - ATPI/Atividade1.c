// Elabore um programa que faça leitura de vários números inteiros até que se
// digite um número negativo. Por fim, o programa tem que retornar o maior e o
// menor número lido.

#include <stdio.h>

int main(){

    int numero, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    maior = menor = numero;

    for(int i = 0; i >= 0; i = numero){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
        }else if(numero < menor){
            menor = numero;
        }
    }

    printf("\nO maior numero e: %d", maior);
    printf("\nO menor numero e: %d\n", menor);

return 0;
}