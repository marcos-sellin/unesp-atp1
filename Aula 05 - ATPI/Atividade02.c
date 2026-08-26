// O custo de uma viagem será estimado pela quantidade gasta de combustível. Faça um programa
// para calcular o gasto da viagem a partir do consumo do carro (Km/L), o preço do combustível
// e a distância a ser percorrida.

#include <stdio.h>

int main() {
    
    float consumo, precoCombust, distancia, custoTotal;

    printf("Informe o consumo do carro (Km/L): ");
    scanf("%f", &consumo);
    printf("Informe o preco do combustivel (R$): ");
    scanf("%f", &precoCombust);
    printf("Informe a distancia percorrida (Km): ");
    scanf("%f", &distancia);

    custoTotal = (distancia / consumo) * precoCombust;

    printf("O gasto total da viagem e: %.2f", custoTotal);

return 0;
}