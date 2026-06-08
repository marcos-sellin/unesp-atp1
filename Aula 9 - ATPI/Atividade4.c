// Ler 5 valores do usuário e apresentar o menor valor.

#include <stdio.h>

int main(){

    float num, menor;
    int i = 0;

    printf("Digite um valor: ");
    scanf("%f", &num);
    menor = num;

    while(i < 4){
        if(num < menor){
            menor = num;
        }
        printf("Digite um valor: ");
        scanf("%f", &num);
        if(num == 0){
            menor = num;
        }
        i++;
    }

    printf("O menor numero e: %.1f", menor);

return 0;
}