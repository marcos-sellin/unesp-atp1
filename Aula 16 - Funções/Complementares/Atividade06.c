// Faça uma função denominada tamanho receber uma string e devolver a
// quantidade de caracteres da frase

#include <stdio.h>

int tamanho(char string[]) {

    int caracteres = 0;

    for(int i = 0; string[i] != '\0'; i++){
        caracteres++;
    }

    caracteres--;

return caracteres;
}

int main() {

    int caracteres;
    char string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);

    caracteres = tamanho(string);
    string[caracteres] = '\0';

    printf("Quantidade de caracteres: %d", caracteres);

return 0;
}