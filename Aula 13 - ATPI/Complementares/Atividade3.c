// Faça um programa que receba um vetor de números inteiros e substitua todos
// os valores maiores que um determinado limite por um valor específico. Em
// seguida, exiba o vetor resultante. Exemplo:
// Tamanho do vetor: 5
// Vetor: [10, 15, 20, 5, 8]
// Limite: 10
// Substituir por: 0
// Vetor: [10, 0, 0, 5, 8]

#include <stdio.h>

int main(){

    int maior, menor, i = 0, numeros[50];
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &maior);
    menor = maior;

    for(i; i < 49; i++){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numeros[i]);

        if(numeros[i] == 0){
            break;
        }

        if(numeros[i] > maior){
            maior = numeros[i];
        }else if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    if(i == 49){
        printf("\nLIMITE ATINGIDO\n");
    }

    printf("\nMenor numero: %d \n", menor);
    printf("Maior numero: %d \n", maior);

return 0;
}