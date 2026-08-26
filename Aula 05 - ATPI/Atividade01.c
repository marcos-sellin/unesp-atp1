// Faça um programa para calcular a quantidade de cupons que um cliente recebe ao realizar
// uma compra em um supermercado. A partir do valor gasto na compra o programa exibe a
// quantidade de cupons, considerando que o cliente recebe um cupom a cada R$ 20,00 em
// compras.

#include <stdio.h>

int main() {

    int valor, cupons;

    printf("Informe a quantidade gasta em R$: ");
    scanf("%d", &valor);

    cupons = valor / 20;
    
    printf("A quantidade de cupons e: %d", cupons);

return 0;
}