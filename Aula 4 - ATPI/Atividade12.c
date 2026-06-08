// Para calcular o consumo de um equipamento elétrico, verifique a potência W (Watts) do
// equipamento, multiplique essa potência pelo tempo estimado de funcionamento (Horas Por
// Dia) e divida por 1000. Desta forma teremos o consumo em kWh do equipamento por dia. Faça
// um programa que leia a potência de um aparelho e o tempo de utilização diária em horas.
// Apresente o consumo estimado de Watts e kWh por dia, mês e ano. Faça também a leitura do
// custo do kWh e indique o gasto mensal estimado do aparelho. 
//
// Exemplo:
//
// Potência do aparelho: P=3.0 watts;
// Tempo de utilização do aparelho: 24.0 horas/dia
// Watts/Dia = 72.0
// Watts/Mes = 2160.0
// Watts/Ano = 25920.0
// kWh/Dia = 0.072
// kWh/Mes = 2.16
// kWh/Ano = 25.92
// Preço do kWh: R$ 0.27
// Gasto mensal é: R$ 0.5832

#include <stdio.h>

int main(){

    float potencia, horas, consumo, consumo_mes, consumo_ano, consumok, consumok_mes, consumok_ano, custo, gasto;
    printf("Digite a potencia do aparelho (em W): ");
    scanf("%f", &potencia);
    printf("Digite o tempo de funcionamento diario do aparelho (em horas): ");
    scanf("%f", &horas);
    printf("Indique o custo do kWh: ");
    scanf("%f", &custo);
    consumo = potencia * horas;
    consumo_mes = consumo * 30;
    consumo_ano = consumo_mes * 12;
    consumok = consumo / 1000;
    consumok_mes = consumok * 30;
    consumok_ano = consumok_mes * 12;
    gasto = consumok_mes * custo;
    printf("Watts por dia: %.2f \n", consumo);
    printf("Watts por mes: %.2f \n", consumo_mes);
    printf("Watts por ano: %.2f \n", consumo_ano);
    printf("kWh por dia: %.2f \n", consumok);
    printf("kWh por mes: %.2f \n", consumok_mes);
    printf("kWh por ano: %.2f \n", consumok_ano);
    printf("O custo do kWh e: %.2f \n", custo);
    printf("O gasto mensal e: %.2f \n", gasto);

return 0;
}