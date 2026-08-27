// Faça uma função denominada remover_espacos para receber uma string e
// remover espaços desnecessários, ou seja, considerar somente um espaço entre as
// palavras da string. Exemplo:
// Digite uma frase: hoje choveu bastante
// Frase alterada: hoje choveu bastante

#include <stdio.h>
#include <string.h>

void remover_espacos(char string[], char resultado[]){

    int j = 0;

    for(int i = 0; i < strlen(string); i++){
        if(string[i] != ' ' || string[i - 1] != ' '){
            resultado[j] = string[i];
            j++;
        }
    }

    resultado[strlen(resultado)] = '\0';
}

int main() {

    char string[200], resultado[100];

    printf("Digite uma frase: ");
    fgets(string, 200, stdin);
    string[strlen(string) - 1] = '\0';

    remover_espacos(string, resultado);

    printf("Frase modificada: %s", resultado);

return 0;
}