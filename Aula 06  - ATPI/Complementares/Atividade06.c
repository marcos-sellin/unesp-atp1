// Faça um programa para ler dois números e o símbolo de uma operação aritmética. Em
// seguida, o programa apresenta o resultado da operação. Para tanto, utilize os seguintes
// símbolos:
// - Soma: +
// - Subtração: -
// - Divisão: /
// - Multiplicação: *
// Exemplo:
// - Digite primeiro número: 5
// - Digite segundo número: 4
// - Digite operação: +
// - Resultado 5 + 4 = 9

#include <stdio.h>

int main(){

    float numero1, numero2, resultado;
    char simbolo;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite um simbolo de operacao aritmetica (+ - * /): ");
    fflush(stdin);
    scanf("%c", &simbolo);

    if(simbolo == '+'){
        resultado = numero1 + numero2;
        printf("%.1f + %.1f = %.1f", numero1, numero2, resultado);
    }else{
        if(simbolo == '-'){
            resultado = numero1 - numero2;
            printf("%.1f - %.1f = %.1f", numero1, numero2, resultado);
        }else{
            if(simbolo == '*'){
                resultado = numero1 * numero2;
                printf("%.1f * %.1f = %.1f", numero1, numero2, resultado);
            }else{
                if(simbolo == '/'){
                    resultado = numero1 / numero2;
                    printf("%.1f / %.1f = %.1f", numero1, numero2, resultado);
                }
            }
        }
    }

return 0;
}