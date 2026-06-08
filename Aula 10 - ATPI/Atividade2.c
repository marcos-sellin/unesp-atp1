// Ler quantos valores serão fornecidos pelo usuário. Em seguida, fazer a
// leitura desses valores. Por fim, apresentar a soma e a média.

#include <stdio.h>

int main(){

    int i, total;
    float num, soma = 0;

    printf("Informe quantos numeros serao digitados: ");
    scanf("%d", &i);
    total = i;

    for(i; i > 0; i--){
        printf("\nInforme um numero (%d/%d): ", total - i + 1, total);
        scanf("%f", &num);
        soma += num;
    }

    printf("\nA soma dos numeros e: %.1f", soma);

return 0;
}