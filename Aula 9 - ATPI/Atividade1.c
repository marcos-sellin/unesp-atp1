// Ler cinco valores fornecidos pelo usuário e calcular a média dos valores.

#include <stdio.h>

int main(){

    float num, media;
    int  i = 0;

    while(i < 5){
        printf("Informe um numero: ");
        scanf("%f", &num);
        media = media + num;
        i = i + 1;
    }

    media = media / 5;
    printf("A media e: %.2f", media);

return 0;
}