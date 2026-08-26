// Faça um programa que leia um conjunto não determinado de valores. A cada
// número lido, o programa deverá exibir o quadrado, o cubo e a raiz quadrada.
// Finalize a entrada de dados quando o usuário digitar um valor negativo ou zero.

// Para calcular a raiz quadrada, deve-se adicionar a biblioteca math.h que será
// apresentada na próxima aula. Então, pode-se utilizar a função sqrt(), conforme
// exemplo abaixo.
// O tipo de dado retornado pela função é o double.
// Em C, o double é um tipo de dado usado para armazenar números reais (com casas
// decimais) com maior precisão que o float, isto é, o float tem precisão simples e o
// double tem precisão dupla, com um padrão binário maior.
// #include <stdio.h>
// #include <math.h>
// int main() {
// float num = 16.0;
// double resultado;
// resultado = sqrt(num);
// printf("Raiz: %.2f\n", resultado);
// return 0;
// }

#include <stdio.h>
#include <math.h>

int main(){

    float numero;
    double resultado;

    for(int i = 1; i > 0; i = numero){

        printf("Digite um numero: ");
        scanf("%f", &numero);

        if(numero <= 0){
            printf("NUMERO INVALIDO\n");
        }

        resultado = pow(numero, 2);
        printf("\nO quadrado do numero e: %.2lf", resultado);
        resultado = pow(numero, 3);
        printf("\nO cubo do numero e: %.2lf", resultado);
        resultado = sqrt(numero);
        printf("\nA raiz quadrada do numero e: %.2lf\n\n", resultado);
    }

return 0;
}