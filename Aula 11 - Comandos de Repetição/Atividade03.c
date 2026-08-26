// Faça um programa que apresente um menu de opções de operações para serem
// realizadas entre dois números fornecidos pelo usuário, conforme abaixo. O
// programa é finalizado quando o usuário digitar a Opção 5.
// MENU
// 1 - Adição
// 2 - Subtração
// 3 - Multiplicação
// 4 - Divisão
// 5 - Sair

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int escolha = 0;
    float resultado, numero1, numero2;

    do{

        printf("MENU \n1 - Adição \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n5 - Sair \n");
        printf("\nDigite o número de uma das opções acima: ");
        scanf("%d", &escolha);

            if(escolha != 5){

            if(escolha < 1 || escolha > 5){
                printf("\nNUMERO INVALIDO\n\n");
            }else{
                printf("\nDigite o primeiro número: ");
                scanf("%f", &numero1);
                printf("Digite o segundo número: ");
                scanf("%f", &numero2);

                switch(escolha){
                case 1:
                    resultado = numero1 + numero2;
                    break;
                case 2:
                    resultado = numero1 - numero2;
                    break;
                case 3:
                    resultado = numero1 * numero2;
                    break;
                case 4:
                    resultado = numero1 / numero2;
                    break;
                }

            printf("\nO resultado e: %.2f \n\n", resultado);
            }

            }

    }while(escolha != 5);

return 0;
}