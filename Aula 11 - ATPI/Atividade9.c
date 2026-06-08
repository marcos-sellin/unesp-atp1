// Faça um programa para ler um número inteiro positivo N e, em seguida,
// imprimir N linhas do chamado Triângulo de Floyd. Por exemplo, para N=6 temos:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21

#include <stdio.h>

int main(){

    int i, coluna = 1, numero = 1, limite = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &i);
    printf("\n");

    for(i; i > 0; i--){

        for(coluna; coluna <= limite; coluna++){
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
        limite += 1;
        coluna = 1;

    }

return 0;
}