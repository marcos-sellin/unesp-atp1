// Faça um programa para ler um valor inteiro e positivo N. Em seguida, deve-se
// calcular e exibir o valor de E, que é calculado conforme a seguinte equação:
// E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

#include <stdio.h>

int main(){

    int numero, fatorial = 1;
    float euler = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        fatorial *= i;
        euler += 1.0 / fatorial;
    }

    printf("O numero de euler e: %f \n", euler);

return 0;
}