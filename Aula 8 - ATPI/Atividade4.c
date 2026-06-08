// Usando switch, faça um programa para ler dois valores e apresentar para o
// usuário o menu de opções conforme abaixo. Em seguida, o programa deverá ler a
// opção indicada pelo usuário e efetuar a operação desejada. Adicionalmente, o
// programa deve apresentar uma mensagem de erro caso a opção digitada for
// inválida.
// MENU
// 1- Somar os dois números
// 2- Subtrair os dois números
// 3- Multiplicar os dois números
// 4- Dividir os dois números (o denominador não pode ser zero)
// 5- Sair
// Digite uma opção:

#include <stdio.h>

int main(){

    float num1, num2;
    int opcao;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("\nMENU");
    printf("\n1- Somar os dois numeros");
    printf("\n2- Subtrair os dois numeros");
    printf("\n3- Multiplicar os dois numeros");
    printf("\n4- Dividir os dois numeros (o denominador nao pode ser zero)");
    printf("\n5- Sair\n");
    printf("\nDigite uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("\nResultado: %.1f", num1+num2);
        break;
    case 2:
        printf("\nResultado: %.1f", num1-num2);
        break;
    case 3:
        printf("\nResultado: %.1f", num1*num2);
        break;
    case 4:
        printf("\nResultado: %.1f", num1/num2);
        break;
    case 5:
        return 0;
        break;
    default:
        printf("\nOPCAO INVALIDA");
    }

return 0;
}