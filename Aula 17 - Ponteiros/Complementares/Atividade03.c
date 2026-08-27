// Faça uma função denominada maior_menor para receber uma string e retornar
// por parâmetro a menor e a maior letra, considerando a ordem alfabética.

#include <stdio.h>
#include <string.h>

void maior_menor(char string[], char *maior_letra, char *menor_letra) {

    *maior_letra = string[0];
    *menor_letra = string[0];

    for(int i = 1; i < strlen(string); i++){
        if(string[i] > *maior_letra){
            *maior_letra = string[i];
        }else if(string[i] < *menor_letra){
            *menor_letra = string[i];
        }
    }

}

int main() {

    char maior_letra, menor_letra;
    char string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    maior_menor(string, &maior_letra, &menor_letra);

    printf("Maior letra (orden alfabetica): %c \n", maior_letra);
    printf("Menor letra (ordem alfabetica): %c", menor_letra);

return 0;
}