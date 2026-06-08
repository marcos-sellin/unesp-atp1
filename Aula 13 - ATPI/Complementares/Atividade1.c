// Faça um programa para ler um vetor de números inteiros contendo apenas os
// valores 0 e 1 (representando um padrão binário). Em seguida, substitua todas as
// ocorrências do número 0 pelo número 1 e exiba o novo vetor. Exemplo:
// Tamanho do vetor: 5
// Vetor com os dados de entrada: [0, 1, 0, 0, 1]
// Vetor com os dados processados: [1, 1, 1, 1, 1]

#include <stdio.h>

int main(){

    int valores[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

    for(int j = 0; j < 5; j++){
        printf("\nValores[%d]: %d", j, valores[j]);
    }

    printf("\n");
return 0;
}