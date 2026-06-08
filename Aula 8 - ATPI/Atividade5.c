// Escreva um programa para ler a idade de um nadador e classifica-lo.
// O programa deve apresentar uma mensagem de erro caso a idade seja inferior a 5 anos ou superior a 100 anos.
// Faça comforme a tabela a seguir:
// Idade Categoria
// 5 a 7 anos Infantil A
// 8 a 10 anos Infantil B
// 11 a 13 anos Juvenil A
// 14 a 17 anos Juvenil B
// 18 anos ou mais Adulto

#include <stdio.h>

int main(){

    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    switch(idade){
    case 0 ... 4:
        printf("O nadador nao pode competir");
        break;
    case 5 ... 7:
        printf("Categoria Infantil A");
        break;
    case 8 ... 10:
        printf("Categoria Infantil B");
        break;
    case 11 ... 13:
        printf("Categoria Juvenil A");
        break;
    case 14 ... 17:
        printf("Categoria Juvenil B");
        break;
    case 18 ... 100:
        printf("Categoria Adulto");
        break;
    default:
        printf("IDADE INVALIDA");
        break;
    }

return 0;
}