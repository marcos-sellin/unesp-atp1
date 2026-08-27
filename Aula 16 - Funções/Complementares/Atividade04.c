// Faça uma função para receber um valor e um intervalo. A função deverá
// retornar 0 (falso) se o valor não estiver no intervalo ou 1 (verdadeiro) se o valor
// estiver dentro do intervalo. O intervalo é especificado por um valor inicial e final.
// Exemplo de assinatura da função:
// int dentro_intervalo(int valor, int inicio, int fim);
// Utilize essa função em três exemplos para validar:
// a) Entrada de dados para os meses do ano (1 a 12)
// b) Entrada de dados de hora (0 a 23) e minutos (0 a 59)
// c) Menor de idade (0 a 17)

#include <stdio.h>

int checarIntervalo(int valor, int inicio, int fim){

    if(valor >= inicio && valor <= fim){
        return 1;
    }else{
        return 0;
    }

}

int main() {

    int valor, inicio, fim, resultado;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    resultado = checarIntervalo(valor, inicio, fim);

    if(resultado == 1){
        printf("O valor pertence ao intervalo");
    }else{
        printf("O valor nao pertence ao intervalo");
    }

return 0;
}