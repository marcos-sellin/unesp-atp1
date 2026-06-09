// Ler e armazenar N elementos em um vetor. Em seguida, exibir os elementos do vetor e a soma
// dos elementos. Fazer o processamento após a leitura, com os dados armazenados.

#include <stdio.h>

int main() {

    int n;

    printf("Informe quantos elementos tera o vetor: ");
    scanf("%d", &n);

    int vetor[n], soma = 0;

    for(int i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("Vetor: ");

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    
    printf("\nSoma dos valores: %d", soma);

return 0;
}