// Ler a quantidade de valores que serão fornecidos pelo usuário. Em
// seguida, fazer a leitura desses valores. Por fim, apresentar a soma e a
// média.

#include <stdio.h>

int main(){

    float num, soma, media;
    int quantidade, i;
    printf("Informe quantos valores serao digitados: ");
    scanf("%d", &quantidade);
    i = quantidade;

    while(i != 0){
        printf("\nInforme um numero: ");
        scanf("%f", &num);
        soma = soma + num;
        media = media + num;
        i = i - 1;
    }

    media = media / quantidade;
    printf("\nA soma e: %.2f \n", soma);
    printf("A media e: %.2f \n", media);


return 0;
}