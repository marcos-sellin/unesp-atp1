// Verificar se uma string contém um determinado caractere.

#include <stdio.h>

int main(){

    char string[50];
    int j = 0;

    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == 'a' || string[i] == 'A'){
            j++;
        }
    }

    if(j > 0){
        printf("\nSua string contem a letra 'a'\n");
    }else{
        printf("\nSua string nao contem a letra 'a'\n");
    }

return 0;
}