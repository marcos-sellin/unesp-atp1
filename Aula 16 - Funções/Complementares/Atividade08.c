// Faça uma função denominada centralizar que recebe uma string e insere
// espaços no início da string de modo que a exibição da string seja centralizado.
// Para tanto, além da string, também deve ser passado como parâmetro a quantidade
// de caracteres que devem ser considerados para a centralização.

#include <stdio.h>
#include <string.h>

void centralizar(char string[], int maior_tamanho){

    int tamanho = strlen(string);
    int espacos = (maior_tamanho - tamanho) / 2;
    char centralizada[200];

    for(int i = 0; i < espacos; i++){
        centralizada[i] = ' ';
    }

    centralizada[espacos] = '\0';

    strcat(centralizada, string);
    strcpy(string, centralizada);

}

int main() {

    int n, tamanho, maior_tamanho = 0;

    printf("Informe quantas palavras serao fornecidas: ");
    scanf("%d", &n);
    getchar();

    printf("Forneca %d palavras: \n", n);

    char string[n][100];

    for(int i = 0; i < n; i++){
        scanf("%s", string[i]);
        tamanho = strlen(string[i]);
        
        if(tamanho > maior_tamanho){
            maior_tamanho = tamanho;
        }
    }

    printf("Palavras centralizadas: \n");

    for(int i = 0; i < n; i++){
        centralizar(string[i], maior_tamanho);
        printf("%s \n", string[i]);
    }

return 0;
}