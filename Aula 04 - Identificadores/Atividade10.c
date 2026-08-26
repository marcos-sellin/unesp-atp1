// A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
// Sendo que da quantia total:
// - O primeiro ganhador receberá 50%;
// - O segundo receberá 30%;
// - O terceiro receberá o restante.
// Calcule e imprima a quantia ganha por cada um dos ganhadores.

#include <stdio.h>

int main(){

    float premio, vencedor1, vencedor2, vencedor3;
    printf("O PREMIO E DE R$780.000,00 \n");
    premio = 780000.00;
    vencedor1 = 780000 * 50 / 100;
    vencedor2 = 780000 * 30 / 100;
    vencedor3 = 780000 - vencedor1 - vencedor2;
    printf("O primeiro vencedor recebeu: %.2f \n", vencedor1);
    printf("O segundo vencedor recebeu: %.2f \n", vencedor2);
    printf("O terceiro vencedor recebeu: %.2f \n", vencedor3);


return 0;
}