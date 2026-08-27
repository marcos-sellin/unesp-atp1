// Faça uma função denominada contagem para receber uma string e retornar por
// parâmetros a quantidade de vogais, quantidade de consoantes e quantidade de
// dígitos numéricos.

#include <stdio.h>
#include <string.h>

void contagem(char string[], int *vogais, int *consoantes, int *numeros) {

    for(int i = 0; i < strlen(string); i++){
        switch(string[i]){
            case 'a': case 'e':
            case 'i': case 'o':
            case 'u':
                (*vogais)++;
            break;

            default:
                (*consoantes)++;
            break;
        }

        if(string[i] >= 48 && string[i] <= 57){
           (*consoantes)--;
            (*numeros)++;
        }
    }

}

int main() {

    int vogais = 0, consoantes = 0, numeros = 0;
    char string[100];

    printf("Digite uma sequencia de caracteres: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    contagem(string, &vogais, &consoantes, &numeros);

    printf("Quantos caracteres sao vogais: %d \n", vogais);
    printf("Quantos caracteres sao consoantes: %d \n", consoantes);
    printf("Quantos caracteres sao numeros: %d", numeros);

return 0;
}