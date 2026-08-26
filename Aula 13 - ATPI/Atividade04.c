// Preencher um vetor com N elementos da sequência de Fibonacci. Em seguida, exibir os
// elementos do vetor. Considere N>2.

#include <stdio.h>

int main() {

    int n;

    printf("Informe quantos elementos tera o vetor: ");
    scanf("%d", &n);

    int fibonacci[n];

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for(int i = 2; i < n; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    printf("\nVetor da sequencia de fibonacci: ");
    for(int i = 0; i < n; i++){
        printf("%d ", fibonacci[i]);
    }

return 0;
}