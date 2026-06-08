// Ler quantos valores serão fornecidos pelo usuário. Em seguida, fazer a
// leitura desses valores. Por fim, apresentar a soma e a média.

#include <stdio.h>

int main(){

    int i;
    float valor, operacao, media;

    printf("Informe quantos numeros serao digitados: ");
    scanf("%d", &i);
    media = i;

    for(i; i > 0; i--){
        printf("Digite um numero: ");
        scanf("%f", &valor);
        operacao += valor;
    }

    printf("\nA soma dos valores e: %.1f\n", operacao);
    operacao /= media;
    printf("A media dos valores e: %.1f", operacao);

return 0;
}