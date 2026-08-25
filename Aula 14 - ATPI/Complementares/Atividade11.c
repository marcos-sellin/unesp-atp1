// Faça um programa para ler uma string e transferir o conteúdo para uma outra
// varíavel string.

#include <stdio.h>

int main() {

    int i = 0;
    char string1[100], string2[100];

    printf("Digite uma palavra: ");
    fgets(string1, 100, stdin);

    for(i; string1[i] != '\0'; i++){
        string2[i] = string1[i];
    }

    string2[i - 1] = '\0';
    printf("Palavra copiada: %s", string2);

return 0;
}