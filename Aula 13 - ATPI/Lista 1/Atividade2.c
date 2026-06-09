// Faça um programa para ler N números e armazena-los em um vetor. O valor
// de N é fornecido pelo usuário. Em seguida, o seu programa deverá exibir os
// números lidos.

#include <stdio.h>

int main(){

    int N, soma;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &N);

    int valores[N];
    valores[0] = 1;
    printf("\nValores[0] = %d", valores[0]);

    for(int i = 1; i < N; i++){
        valores[i] = valores[i - 1] + (i + 1);
        printf("\nValores[%d] = %d", i, valores[i]);
    }

printf("\n");
return 0;
}