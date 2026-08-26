// Faça um programa ler a data de hoje e a data de nascimento de uma pessoa. Em
// seguida, o programa deverá apresentar a idade dessa pessoa.

#include <stdio.h>

int main() {

    int dia, mes, ano, dia_a, mes_a, ano_a, idade;

    printf("Informe o dia atual (dd/mm/aaaa): ");
    scanf("%d", &dia);
    printf("Informe o mes atual (%d/mm/aaaa): ", dia);
    scanf("%d", &mes);
    printf("Informe o ano atual (%d/%d/aaaa): ", dia, mes);
    scanf("%d", &ano);
    printf("Dia atual (%d/%d/%d)\n\n", dia, mes, ano);

    printf("Informe o dia do aniversario (dd/mm/aaaa): ");
    scanf("%d", &dia_a);
    printf("Informe o mes do aniversario (%d/mm/aaaa): ", dia_a);
    scanf("%d", &mes_a);
    printf("Informe o ano do aniversario (%d/%d/aaaa): ", dia_a, mes_a);
    scanf("%d", &ano_a);
    printf("Dia do aniversario (%d/%d/%d)\n\n", dia_a, mes_a, ano_a);

    idade = ano - ano_a;

    if(mes < mes_a && dia < dia_a){
        idade--;
    }

    printf("Idade: %d", idade);
    
return 0;
}