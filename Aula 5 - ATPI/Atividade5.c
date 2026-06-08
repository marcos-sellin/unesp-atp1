// Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
// número de dias trabalhados pelo encanador, sabendo-se que são descontados 8% para imposto
// de renda. O programa deverá exibir o valor bruto, o valor do desconto e o valor líquido.

#include <stdio.h>

int main() {

    int diasTrabalhados;
    float salario;
    
    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salario = (30 * diasTrabalhados) * 92 / 100;

    printf("O salario e: %.2f", salario); 

return 0;
}