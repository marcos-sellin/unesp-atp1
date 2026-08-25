// Faça um programa para ler uma string e apresentar o seu tamanho (quantidade
// caracteres da frase.

#include <stdio.h>

int main() {

    int tamanho = 0;
    char string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);

    for(int i = 0; string[i] != '\0'; i++){
        tamanho++;
    }

    printf("Quantidade de caracteres: %d", tamanho - 1);

return 0;
}