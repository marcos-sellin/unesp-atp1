// Ler cinco valores fornecidos pelo usuário e calcular a média dos valores.

#include <stdio.h>

int main(){

    float valor, media = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &valor);
        media += valor;
    }

    media /= 5;
    printf("A media dos valores e: %.1f", media);

return 0;
}