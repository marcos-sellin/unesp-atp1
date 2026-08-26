// Ler um número binário e substituir o caractere ‘0’ por um ‘*’.

#include <stdio.h>

int main(){

    char binario[17];

    printf("Digite um numero binario: ");
    fgets(binario, 17, stdin);

    for(int i = 0; binario[i] != '\0'; i++){
        if(binario[i] == '0'){
            binario[i] = '*';
        }
    }

    printf("Numero em binario: %s", binario);

return 0;
}