// Faça um programa para ler 5 números e armazena-los em um vetor. Em
// seguida, o seu programa deverá exibir os números lidos.

#include <stdio.h>

int main(){

    int N, soma;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &N);

    int valores[N];

    for(int i = 0; i < N; i++){
        printf("\nDigite um valor: ");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    for(int j = 0; j < N; j++){
        printf("\nValores[%d]: %d", j, valores[j]);
    }

    printf("\n\nSoma dos elementos: %d\n", soma);

return 0;
}