// Faça uma função denominada menu para exibir um menu para o Exercício 1.
// A função deverá exibir um menu e retornar o valor da opção escolhida pelo
// usuário. A exibição e leitura pode ser realizada dentro da função menu. Exemplo
// de menu:
// 1 – Soma
// 2 – Subtração
// 3 – Multiplicação
// 4 – Divisão
// 5 – Sair
// Digite opção:

#include <stdio.h>

int menu() {

    int opcao;

    printf("Menu de Operacoes: \n");
    printf("1 - Soma \n");
    printf("2 - Subtracao \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    printf("5 - Sair \n");
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

return opcao;
}

float somar(float parcela1, float parcela2){

    float soma;
    soma = parcela1 + parcela2;

return soma;
}

float subtrair(float minuendo, float subtraendo){

    float diferenca;
    diferenca = minuendo - subtraendo;

return diferenca;
}

float multiplicar(float fator1, float fator2){

    float produto;
    produto = fator1 * fator2;

return produto;
}

float dividir(float dividendo, float divisor){

    float quociente;
    quociente = dividendo / divisor;

return quociente;
}

int main() {

    int escolha;
    float n1, n2, soma, diferenca, produto, quociente;

    for(;;){
        escolha = menu();

        if(escolha > 0 && escolha < 5){
            printf("\nDigite o primeiro valor: ");
            scanf("%f", &n1);

            printf("Digite o segundo valor: ");
            scanf("%f", &n2);

            switch(escolha){
                case 1:
                    soma = somar(n1, n2);
                    printf("Soma: %.2f \n\n", soma);
                break;

                case 2:
                    diferenca = subtrair(n1, n2);
                    printf("Subtracao: %.2f \n\n", diferenca);
                break;

                case 3:
                    produto = multiplicar (n1, n2);
                    printf("Multiplicacao: %.2f \n\n", produto);
                break;

                case 4:
                    quociente = dividir(n1, n2);
                    printf("Divisao: %.2f \n\n", quociente);
                break;
            }

        }else if(escolha <= 0 || escolha > 5) {
            printf("\nEscolha invalida\n\n");
        }else{
            break;
        }
    }
    

return 0;
}