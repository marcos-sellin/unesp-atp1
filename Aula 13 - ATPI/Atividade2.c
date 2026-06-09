// Preencher um vetor com a soma acumulada de 1 a N. Em seguida, exibir os elementos do vetor.

#include <stdio.h>

int main() {

    int n;

    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int numero, vetor[n];

    printf("Informe um numero: ");
    scanf("%d", &vetor[0]);

    for(int i = 1; i < n; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero);
        vetor[i] = vetor[i - 1] + numero;
    }

    printf("\nVetor com soma acumulada: ");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

return 0;
}