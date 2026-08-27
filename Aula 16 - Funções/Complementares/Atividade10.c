// Faça uma função denominada digito que recebe uma string e verificar se ela
// contém somente dígitos. Se a string for composta somente por dígitos a função
// retorna 1 (verdadeiro), caso contrário, a função retorna 0 (falso). Exemplo:
// Digite uma palavra: 12a3
// Verificação: 0
// Digite uma palavra: 123
// Verificação: 1

#include <stdio.h>
#include <string.h>

int digito(char string[]) {

    int nao_numero = 0;

    for(int i = 0; i < strlen(string); i++){
        if(string[i] < 48 || string[i] > 57){
            nao_numero++;
            break;
        }
    }

    if(nao_numero == 0){
        return 1;
    }else{
        return 0;
    }

}

int main() {

    int checagem;
    char string[100];

    printf("Digite uma palavra: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    checagem = digito(string);

    printf("Verificacao: %d", checagem);

return 0;
}