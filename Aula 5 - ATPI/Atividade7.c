// Faça um programa para ler um número inteiro de 3 dígitos (de 100 a 999). Em seguida, o
// programa deverá gerar outro número formado pelos dígitos invertidos do número lido. Lembre
// que o operador % calcula o resto da divisão. Exemplo:
// Digite um número inteiro entre 100 e 999:
// Número lido: 123
// Número gerado: 321

#include <stdio.h>

int main() {

    int numero, original, centenas, dezenas, unidades, numeroInvertido;

    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%d", &numero);

    original = numero;

    centenas = numero / 100;
    dezenas = (numero / 10) % 10;
    unidades = numero % 10;

    numeroInvertido = (unidades * 100) + (dezenas * 10) + centenas;

    printf("Numero lido: %d\n", original);
    printf("Numero gerado: %d\n", numeroInvertido);

    return 0;
    
}