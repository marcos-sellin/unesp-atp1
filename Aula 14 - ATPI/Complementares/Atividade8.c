// Faça um programa que receba uma palavra e a imprima de trás-para-frente.

#include <stdio.h>

int main() {

    int final, j = 0;
    char string[100], invertida[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);

    for(int i = 0; ; i++){
        if(string[i] == '\n'){
            string[i] = '\0';
            break;
        }
    }

    for(int i = 0; string[i] != '\0'; i++){
        j++;
    }

    final = j;

    for(int i = 0; string[i] != '\0'; i++){
        invertida[i] = string[j - 1];
        j--;
    }

    invertida[final] = '\0';
    printf("Palavra invertida: %s", invertida);

return 0;
}