// Faça um programa para ler número inteiros positivos até que um número menor
// ou igual a zero seja digitado. Esses valores devem ser armazenados em um vetor.
// Após a leitura, seu programa deverá percorrer o vetor para encontrar o maior
// elemento, exibir o vetor e o maior elemento.

#include <stdio.h>

int main(){

    int N, soma;

    printf("Digite a quantidade de valores da Sequencia de Fibonacci: ");
    scanf("%d", &N);

    int valores[N];
    valores[0] = 1;
    valores[1] = 1;
    printf("\nValores[0] = %d", valores[0]);
    printf("\nValores[1] = %d", valores[1]);

    for(int i = 2; i < N; i++){
        valores[i] = valores[i - 1] + valores[i - 2];
        printf("\nValores[%d] = %d", i, valores[i]);
    }

printf("\n");
return 0;
}