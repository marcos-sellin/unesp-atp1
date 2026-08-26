// Faça um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
// como a diferença existente entre ambos. Por exemplo:
// - Informe o Primeiro Número: 3
// - Informe o Segundo Número: 5
// - O maior é o número 5
// - A diferença entre eles é 2

#include <stdio.h>

int main(){

    float numero1, numero2, diferenca;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    if(numero1 == numero2){
        printf("Os numeros sao iguais \n");
        diferenca = numero1 - numero2;
        printf("A diferenca entre eles e: %.1f", diferenca);
    }else{
        if(numero1 > numero2){
            printf("O maior numero e: %.1f \n", numero1);
            diferenca = numero1 - numero2;
            printf("A diferenca entre eles e: %.1f", diferenca);
        }else{
            printf("O maior numero e: %.1f \n", numero2);
            diferenca = numero2 - numero1;
            printf("A diferenca entre eles e: %.1f", diferenca);
        }
    }

return 0;
}