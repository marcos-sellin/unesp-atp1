// Exibir os 3 primeiros caracteres de uma string.

#include <stdio.h>

int main(){

    int j = 0;
    char string[50];

    printf("Digite uma frase: ");
    fgets(string, 50, stdin);
    printf("\nTres primeiros caracteres: ");

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] != ' '){
            printf("%c", string[i]);
            j++;
        }

        if(j == 3){
            break;
        }
    }

return 0;
}