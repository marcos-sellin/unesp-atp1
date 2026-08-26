// Faça um programa para ler uma letra minúscula e escrever se ela é vogal ou
// consoante. Considere que o usuário digitará uma letra minúscula.

#include <stdio.h>

int main(){

    char letra;
    printf("Digite uma letra do alfabeto: ");
    scanf("%c", &letra);

    switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("A letra e uma vogal");
        break;
    default:
        printf("A letra e uma consoante");
        break;
    }

return 0;
}