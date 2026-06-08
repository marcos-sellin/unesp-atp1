// Desenvolva um programa que leia duas palavras fornecidas pelo usuário,
// utilizando a leitura caractere por caractere, e armazene cada caractere em um vetor
// correspondente à palavra lida. O programa deve primeiro solicitar ao usuário o
// tamanho da primeira palavra e o tamanho da segunda palavra.
// Com base nesses tamanhos, crie dois vetores de caracteres: um vetor
// palavra1[tamanho1 + tamanho2] para armazenar a primeira palavra e
// o conteúdo da segunda palavra; um vetor palavra2[tamanho2] para
// armazenar a segunda palavra. Note que o vetor palavra1 é maior, pois armazenará
// o conteúdo da segunda palavra. Assim, a primeira palavra será armazenada no
// vetor palavra1 e a segunda palavra será armazenada no vetor palavra2.
// Após a leitura das palavras, concatene a segunda palavra ao final da primeira
// palavra. A concatenação é uma operação muito utilizada e tem a finalidade de
// juntar palavras. Para isso, copie o conteúdo de palavra2 para o final de
// palavra1. Por fim, o programa deve exibir o conteúdo do vetor palavra1,
// que agora conterá a palavra concatenada. Exemplo:
// Digite o tamanho da primeira palavra: 3
// Digite o tamanho da segunda palavra: 3
// Digite a primeira palavra: bom
// Digite a segunda palavra: dia
// Palavra concatenada: bomdia

#include <stdio.h>
/* exercicio incompleto */

int main(){

    int numeros[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um numero (%d/10): ", i + 1);
        scanf("%d", &numeros[i]);

        for(int j = 0; j < i; j++){
            if(numeros[i] == numeros [j]){
                printf("O numero ja foi digitado\n\n");
                i--;
            }
        }
    }

    printf("\nValores no vetor: ");

    for(int i = 0; i < 10; i++){
        printf("%d, ", numeros[i]);
    }

return 0;
}