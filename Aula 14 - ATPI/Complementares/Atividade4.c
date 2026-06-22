// Faça um programa para ler uma string que represente um padrão binário (0s e
// 1s). Em seguida, deve-se substituir as ocorrências de um caractere ‘0’ pelo
// caractere ‘1’ e o caractere ‘1’ pelo caractere ‘0’. Por fim, exibir a nova string.

#include <stdio.h>

int main() {

    char binario[64];
    
    printf("Digite uma palavra em binario: ");
    fgets(binario, 64, stdin);
    
    for(int i = 0; binario[i] != '\0'; i++){
        if(binario[i] == '0'){
            binario[i] = '1';
        }else if(binario[i] == '1'){
            binario[i] = '0';
        }
    }
    
    printf("Palavra com valores invertidos: ");
    
    for(int i = 0; binario[i] != '\0'; i++){
        printf("%c", binario[i]);
    }

return 0;
}