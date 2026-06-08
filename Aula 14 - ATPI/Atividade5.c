// Exibir os 3 últimos caracteres de uma string.

#include <stdio.h>

int main(){

    int i = 0;
    char string[50];

    printf("Digite uma frase: ");
    fgets(string, 50, stdin);
    printf("Tres ultimas letras: ");

    for(i; string[i] != '\0'; i++){}
    i--;

    for(int j = i - 3; j < i; j++){
        printf("%c", string[j]);
    }

return 0;
}