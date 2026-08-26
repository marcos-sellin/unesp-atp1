// Faça um programa para ler um vetor de números inteiros e apresentar a
// quantidade de valores pares e ímpares no vetor informado. Exemplo:
// Tamanho do vetor: 6
// Vetor: [2, 5, 7, 4, 6, 9]
// Quantidade de pares: 3
// Quantidade de ímpares: 3

#include <stdio.h>

int main(){

    int n;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);
    printf("\n");

    int valores[n];

    for(int i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

    for(int j = 0; j < n; j++){
        printf("\nValores[%d]: %d", j, valores[j]);
    }

printf("\n");
return 0;
}