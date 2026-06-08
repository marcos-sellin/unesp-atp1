// Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
// em vista que o desconto foi de 12%

#include <stdio.h>

int main(){

    float salario_antigo, salario_novo;
    printf("ACRESCIMO DE 0.25 \n");
    printf("Digite o valor do salario: ");
    scanf("%f", &salario_antigo);
    salario_novo = salario_antigo + (salario_antigo * 25 / 100);
    printf("O valor do novo salario e: %.2f", salario_novo);

return 0;
}