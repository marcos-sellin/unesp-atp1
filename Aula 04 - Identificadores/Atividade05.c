// Faça um programa para ler um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

#include <stdio.h>

int main(){

    float reais, dolar, cota;
    printf("Digite o valor em reais: ");
    scanf("%f", &reais);
    printf("Digite o valor de 1 dolar em reais: ");
    scanf("%f", &cota);
    dolar = reais / cota;
    printf("O valor em dolar e: %.2f \n", dolar);

return 0;
}