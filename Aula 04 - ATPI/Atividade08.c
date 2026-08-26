// Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%

#include <stdio.h>

int main(){

    float valor, desconto;
    printf("DESCONTO DE 0,12 \n");
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    desconto = valor - (valor * 12 / 100);
    printf("O valor do produto com o desconto e: %.2f \n", desconto);

return 0;
}