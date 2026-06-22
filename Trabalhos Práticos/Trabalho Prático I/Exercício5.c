// Faça uma função para retornar a quantidade de vezes que uma string está contida em outra, ou seja,
// quantas vezes uma substring aparece em uma string. Exemplo de entrada e saída:
//
// Digite uma Palavra: 242544264542634524253454234
// Palavra de Busca: 42
// A Palavra de Busca ocorre 5 vez(es)
//
// Digite uma Palavra: papagaio
// Palavra de Busca: pa
// A Palavra de Busca ocorre 2 vez(es)
//
// Digite uma Palavra: abacate
// Palavra de Busca: pa
// A Palavra de Busca ocorre 0 vez(es)
//
// Digite uma Palavra: hoje vou programar muito
// Palavra de Busca: programa
// A Palavra de Busca ocorre 1 vez(es)

#include <stdio.h>

int contarSubstrings(char texto[], char palavraBusca[]) {
    int cont = 0, i = 0;

    if (palavraBusca[0] == '\0'){
        return 0;
    } 

    while (texto[i] != '\0') {
        int j = 0;

        while (palavraBusca[j] != '\0' && texto[i + j] == palavraBusca[j]) {
            j++;
        }

        if (palavraBusca[j] == '\0') {
            cont++;
            i++; 
        }
        else {
            i++;
        }
    }

    return cont;
}

int main (void) {
    char texto[300], busca[200];
    int quantidade, k = 0;

    printf("Digite uma Palavra: ");
    fgets(texto, 300, stdin);

    while(texto[k] != '\0'){
        if(texto[k] == '\n'){
            texto[k] = '\0';
            break;
        }
        k++;
    }

    printf("Palavra de Busca: ");
    fgets(busca, 200, stdin);

    k = 0;
    while(busca[k] != '\0'){
        if(busca[k] == '\n'){
            busca[k] = '\0';
            break;
        }
        k++;
    }

    quantidade = contarSubstrings(texto, busca);

    printf("A Palavra de Busca ocorre %d vez(es)\n", quantidade);

    return 0;
}
