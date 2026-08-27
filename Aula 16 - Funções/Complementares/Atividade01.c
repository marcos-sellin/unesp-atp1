// Faça funções para calcular a soma, subtração, multiplicação e divisão de dois
// números. Desenvolva uma função para cada operação. Leia dois valores do
// usuário e exiba o resultado das quatro operações na main após chamar funções
// desenvolvidas.

#include <stdio.h>

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

    float n1, n2, soma, diferenca, produto, quociente;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    soma = somar(n1, n2);
    diferenca = subtrair(n1, n2);
    produto = multiplicar (n1, n2);
    quociente = dividir(n1, n2);

    printf("Resultado das operacoes: \n");

    printf("Soma: %.2f \n", soma);
    printf("Subtracao: %.2f \n", diferenca);
    printf("Multiplicacao: %.2f \n", produto);
    printf("Divisao: %.2f \n", quociente);

return 0;
}