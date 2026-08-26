// Ler 5 valores do usuário e apresentar o maior valor.

#include <stdio.h>

int main(){

    float num, maior;
    int i = 0;

    printf("Digite um valor: ");
    scanf("%f", &num);
    maior = num;

    while(i < 4){
        printf("Digite um valor: ");
        scanf("%f", &num);
        if(num > maior){
            maior = num;
        }
        i++;
    }

    printf("O maior numero e: %.1f", maior);

return 0;
}