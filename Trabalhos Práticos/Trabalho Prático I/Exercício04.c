// Faça uma função para verificar se uma string está contida em outra, ou seja, se uma string é
// substring de outra. A função deve retornar 1, caso a substring esteja presente na string; ou 0, caso
// contrário. Exemplo de assinatura de função: int contemSubstring(char texto[], char palavraBusca[]).
//
// Digite uma Palavra: abacate
// Palavra de Busca: cat
// Palavra de Busca esta na String
//
// Digite uma Palavra: papagaio
// Palavra de Busca: gio
// Palavra de Busca nao esta na String
//
// Digite uma Palavra: papagaio
// Palavra de Busca: ioio
// Palavra de Busca nao esta na String
//
// Digite uma Palavra: batata
// Palavra de Busca: aba
// Palavra de Busca nao esta na String

#include <stdio.h>

int contemSubstring(char texto[], char palavraBusca[]) {
    int i = 0, j = 0;

    if (palavraBusca[0] == '\0'){
        return 1;
    }

    while (texto[i] != '\0') {
        j = 0;
        while (palavraBusca[j] != '\0' && texto[i + j] == palavraBusca[j]) {
            j++;
        }
        if (palavraBusca[j] == '\0'){
            return 1;
        }

        i++;
    }

    return 0;
}

int main (void) {
    char texto[300], palavraBusca[200];
    int k = 0;

    printf("Digite uma Palavra: ");
    fgets(texto, 300, stdin);

    while (texto[k] != '\0') {
        if (texto[k] == '\n') {
            texto[k] = '\0';
            break;
        }
        k++;
    }

    printf("Palavra de Busca: ");
    fgets(palavraBusca, 200, stdin);

    k = 0;
    while (palavraBusca[k] != '\0') {
        if (palavraBusca[k] == '\n') {
            palavraBusca[k] = '\0';
            break;
        }
        k++;
    }

    if (contemSubstring(texto, palavraBusca)){
        printf("Palavra de Busca está na String\n");
    }
    else{
        printf("Palavra de Busca não está na String\n");
    }

    return 0;
}

