// Faça um programa em que troque todas as ocorrências de uma letra L1 pela
// letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo
// usuário.

#include <stdio.h>

int main() {

    char L1, L2, string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);

    printf("Digite a letra que sera substituida: ");
    scanf("%c", &L1);
    getchar();

    printf("Digite a letra substituta: ");
    scanf("%c", &L2);
    getchar();

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == L1){
            string[i] = L2;
        }
    }

    printf("Palavra nova: %s", string);

return 0;
}