// Faça um programa para substituir todas as ocorrências de um valor V1 por um
// valor V2 em um vetor de números inteiros. O vetor e os valores V1 e V2 devem
// ser fornecidos pelo usuário. Exemplo:
// Tamanho do vetor: 6
// Vetor: [3, 4, 3, 6, 3, 7]
// Valor a substituir (V1): 3
// Valor novo (V2): 0
// Vetor: [0, 4, 0, 6, 0, 7]

#include <stdio.h>

int main(){

    int n;

    printf("Digite a quantidade de valores a serem digitados: ");
    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numeros[i]);
    }

    for(int j = n - 1; j >= 0; j--){
        printf("%d ", numeros[j]);
    }

return 0;
}