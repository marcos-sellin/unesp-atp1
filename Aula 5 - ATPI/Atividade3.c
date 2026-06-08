// Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
// proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
// leia quanto cada apostador investiu, o valor do prêmio e imprima quanto cada um ganharia do
// prêmio com base no valor investido.

#include <stdio.h>

int main() {
    
    float invest1, invest2, invest3, premio, totalInvestido, premio1, premio2, premio3;

    printf("Digite o valor investido pela primeira pessoa: ");
    scanf("%f", &invest1);
    printf("Digite o valor investido pela segunda pessoa: ");
    scanf("%f", &invest2);
    printf("Digite o valor investido pela terceira pessoa: ");
    scanf("%f", &invest3);
    printf("Digite o valor do premio da loteria: ");
    scanf("%f", &premio);

    totalInvestido = invest1 + invest2 + invest3;

    premio1 = (invest1 / totalInvestido) * premio;
    premio2 = (invest2 / totalInvestido) * premio;
    premio3 = (invest3 / totalInvestido) * premio;

    printf("A primeira pessoa ganhou: %.2f\n", premio1);
    printf("A segunda pessoa ganhou: %.2f\n", premio2);
    printf("A terceira pessoa ganhou: %.2f", premio3);

return 0;
}