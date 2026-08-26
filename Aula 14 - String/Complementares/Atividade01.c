// Faça um programa que leia uma string e imprima o seu conteúdo.

#include <stdio.h>

int main(){

    char palavra[100];
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    printf("\nPalavra: %s", palavra);

return 0;
}