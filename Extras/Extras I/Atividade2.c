#include <stdio.h>

int main(){

    int dia, mes, ano, dian, mesn, anon, idade;
    printf("Informe o dia de hoje (XX/xx/xxxx): ");
    scanf("%d", &dia);
    printf("Informe o mes atual (%d/XX/xxxx): ", dia);
    scanf("%d", &mes);
    printf("Informe o ano atual (%d/%d/XXXX): ", dia, mes);
    scanf("%d", &ano);
    printf("(%d/%d/%d): \n\n", dia, mes, ano);

    printf("Informe o dia de nascimento da pessoa (XX/xx/xxxx):");
    scanf("%d", &dian);
    printf("Informe o mes de nascimento da pessoa (%d/XX/xxxx):", dian);
    scanf("%d", &mesn);
    printf("Informe o ano de nascimento da pessoa (%d/%d/XXXX):", dian, mesn);
    scanf("%d", &anon);
    printf("(%d/%d/%d): \n\n", dian, mesn, anon);

    idade = ano - anon;

    if(mes > mesn || mes == mesn && dia >= dian){
        printf("A idade da pessoa e: %d", idade);
    }else{
        printf("A idade da pessoa e: %d", idade - 1);
    }


return 0;
}

