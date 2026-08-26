// Faça um programa para ler dois números e o símbolo de uma operação
// aritmética. Em seguida, o programa apresenta o resultado da operação. Para tanto,
// utilize os seguintes símbolos:
//  Soma: +
//  Subtração: -
//  Divisão: /
//  Multiplicação: *

#include <stdio.h>

int main(){

    float num1, num2;
    char operador;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    fflush(stdin);
    printf("Digite o operador aritmetico ( + - * /): ");
    scanf("%c", &operador);

    switch(operador){
    case '+':
        printf("Resultado: %.1f", num1+num2);
        break;
    case '-':
        printf("Resultado: %.1f", num1-num2);
        break;
    case '*':
        printf("Resultado: %.1f", num1*num2);
        break;
    case '/':
        printf("Resultado: %.1f", num1/num2);
        break;
    default:
        printf("OPERADOR INVALIDO");
    }

return 0;
}