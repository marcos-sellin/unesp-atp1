// Faça um programa para ler dois vetores de números inteiros e verificar se eles
// são iguais, ou seja, se os valores e as posições correspondentes são os mesmos.
// Exemplo:
// Tamanho do vetor: 4
// Vetor 1: [1, 2, 3, 4]
// Vetor 2: [1, 2, 3, 4]
// Os vetores são iguais!
// Tamanho do vetor: 3
// Vetor 1: [1, 2, 3]
// Vetor 2: [1, 3, 2]
// Os vetores são diferentes!

#include <stdio.h>

int main(){

    int n, N1, N2;

    printf("Informe a quantidade de valores que serao digitados: ");
    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nLista digitada: ");

    for(int i = 0; i < n; i++){
        printf("%d, ", numeros[i]);
    }

    printf("\n\nInforme o numero que sera substituido (N1): ");
    scanf("%d", &N1);
    printf("\nInforme o numero que sera posto no lugar do anterior (N2): ");
    scanf("%d", &N2);
    printf("\nN1 = %d e N2 = %d", N1, N2);
    printf("\nLista alterada: ");

    for(int i = 0; i < n; i++){
        if(numeros[i] == N1){
            numeros[i] = N2;
        }
        printf("%d, ", numeros[i]);
    }

return 0;
}