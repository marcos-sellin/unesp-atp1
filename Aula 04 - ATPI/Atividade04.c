// Faça um programa para ler quatro notas, calcular a média aritmética e imprimir o resultado.

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, media;
    printf("Digite a primeira nota: (1/4): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: (2/4): ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota (3/4): ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota (4/4): ");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media das notas e: %.1f \n", media);

return 0;
}