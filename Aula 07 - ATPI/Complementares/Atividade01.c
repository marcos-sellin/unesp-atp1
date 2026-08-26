// Escreva um programa para ler a idade de um nadador e classifica-lo conforme
// a tabela a seguir:

//  Categoria      Idade
// Infantil A      5 a 7
// Infantil B      8 a 10
//  Juvenil A     11 a 13
//  Juvenil B     14 a 17
//   Adulto

#include <stdio.h>

int main() {

    int idade;
    
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
        printf("Categoria: Infantil A");
    }else if(idade <= 10){
        printf("Categoria: Infantil B");
    }else if(idade <= 13){
        printf("Categoria: Juvenil A");
    }else if(idade <= 17){
        printf("Categoria: Juvenil B");
    }else if(idade > 17){
        printf("Categoria: Adulto");
    }else if(idade >= 100) {
        printf("Categoria: Invalida");
    }

return 0;
}