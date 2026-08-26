// Ler 5 valores do usuário e apresentar o maior valor, o menor valor, a
// soma e a média dos valores.

#include <stdio.h>

int main(){

    float num, menor, soma, media, maior = 0;
    int i = 0;

    printf("Digite um valor: ");
    scanf("%f", &num);
    menor = num;
    maior = num;

    while(i < 4){

        if(num < menor){
            menor = num;
        }

        printf("Digite um valor: ");
        scanf("%f", &num);

        if(num == 0){
            menor = num;
        }

        if(num > maior){
            maior = num;
        }

        soma = soma + num;
        media = media + num;

        i++;
    }

    media = media / 5;
    printf("\nO maior numero e: %.2f \n", maior);
    printf("O menor numero e: %.2f \n", menor);
    printf("\nA soma e: %.2f \n", soma);
    printf("A media e: %.2f \n", media);

return 0;
}