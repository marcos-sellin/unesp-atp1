// Faça uma função para receber como parâmetro uma string
// e retornar a quantidade de números presentes na string

#include <stdio.h>
#include <string.h>

int numerosEmUmaString(char string[100]) {

    int quant_numeros = 0;

    for(int i = 0; i < strlen(string); i++){
        if(string[i] >= 48 && string[i] <= 57){
            quant_numeros++;
        }
    }

return quant_numeros;
}

int main() {

    int quant_numeros = 0;
    char string[100];

    printf("Digite uma sequencia de letras e numeros: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    quant_numeros = numerosEmUmaString(string);

    printf("Quantidade de caracteres que sao numeros: %d", quant_numeros);

return 0;
}