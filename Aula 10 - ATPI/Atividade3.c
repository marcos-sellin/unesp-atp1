// Ler 5 valores do usuário e apresentar o maior valor, o menor valor, a
// soma e a média dos valores.

#include <stdio.h>

int main(){

    float num, calculo, maior, menor;
    int i = 2;
    printf("Informe um valor (1/5): ");
    scanf("%f", &num);
    maior = num;
    menor = num;

    for(i; i < 6; i++){
        printf("Informe um valor (%d/5): ", i);
        scanf("%f", &num);
        calculo += num;

        if(num > maior){
            maior = num;
        }else if(num < menor){
            menor = num;
        }
    }

    printf("\nO menor numero e: %.1f \n", menor);
    printf("O maior numero e: %.1f \n", maior);
    printf("A soma dos numeros e: %.1f \n", calculo);
    calculo /= 5;
    printf("A media dos numeros e: %.1f \n", calculo);


return 0;
}