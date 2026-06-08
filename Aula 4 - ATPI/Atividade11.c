// Faça um programa para ler duas notas e dois pesos. Em seguida, apresente a média
// ponderada dessas notas.

#include <stdio.h>

int main(){

    float nota1, nota2, media;
    int peso1, peso2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o seu respectivo peso: ");
    scanf("%d", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o seu respectivo peso: ");
    scanf("%d", &peso2);
    media = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
    printf("O resultado da media ponderada e: %.1f", media);

return 0;
}