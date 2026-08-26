// Ler 5 valores do usuário e apresentar o maior valor, o menor valor, a
// soma e a média dos valores.

#include <stdio.h>

int main(){

    float valor, operacao, maior, menor;

    printf("Digite um numero: ");
    scanf("%f", &valor);
    maior = valor;
    menor = valor;
    operacao = valor;

    for(int i = 0; i < 4; i++){
        printf("Digite um numero: ");
        scanf("%f", &valor);
        operacao += valor;

        if(valor > maior){
            maior = valor;
        }else if(valor < menor){
            menor = valor;
        }
    }

    printf("\nO maior valor e: %.1f", maior);
    printf("\nO menor valor e: %.1f", menor);
    printf("\nA soma dos valores e: %.1f", operacao);
    operacao /= 5;
    printf("\nA media dos valores e: %.1f \n", operacao);

return 0;
}