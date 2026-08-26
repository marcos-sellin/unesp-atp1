// Faça um programa para ler um número e escreve-lo por extenso. Considere
// somente números inteiros entre 0 e 9999. Dica: para facilitar, faça a leitura do
// número como string. Exemplos:
// Digite um número entre 0 e 9999: 1734
// Por extenso: um mil setecentos e trinta e quatro
// Digite um número entre 0 e 9999: 234
// Por extenso: duzentos e trinta e quatro

#include <stdio.h>
#include <string.h>

int main(void) {
    char entrada[10];
    int n;

    printf("Digite um numero entre 0 e 9999: ");
    scanf("%s", entrada);
    n = atoi(entrada);

    if (n < 0 || n > 9999) {
        printf("Numero fora do intervalo permitido.\n");
        return 1;
    }

    if (n == 0) {
        printf("Por extenso: zero\n");
        return 0;
    }

    int milhar = n / 1000;
    int resto_milhar = n % 1000;

    int centena = resto_milhar / 100;
    int resto_centena = resto_milhar % 100;

    char resultado[200] = "";

    if (milhar == 1) {
        strcat(resultado, "mil");
    } else if (milhar == 2) {
        strcat(resultado, "dois mil");
    } else if (milhar == 3) {
        strcat(resultado, "tres mil");
    } else if (milhar == 4) {
        strcat(resultado, "quatro mil");
    } else if (milhar == 5) {
        strcat(resultado, "cinco mil");
    } else if (milhar == 6) {
        strcat(resultado, "seis mil");
    } else if (milhar == 7) {
        strcat(resultado, "sete mil");
    } else if (milhar == 8) {
        strcat(resultado, "oito mil");
    } else if (milhar == 9) {
        strcat(resultado, "nove mil");
    }

    if (milhar > 0 && resto_milhar > 0) {
        if (resto_milhar < 100 || resto_milhar % 100 == 0) {
            strcat(resultado, " e ");
        } else {
            strcat(resultado, " ");
        }
    }

    if (resto_milhar == 100) {
        strcat(resultado, "cem");
    } else {
        if (centena == 1) strcat(resultado, "cento");
        else if (centena == 2) strcat(resultado, "duzentos");
        else if (centena == 3) strcat(resultado, "trezentos");
        else if (centena == 4) strcat(resultado, "quatrocentos");
        else if (centena == 5) strcat(resultado, "quinhentos");
        else if (centena == 6) strcat(resultado, "seiscentos");
        else if (centena == 7) strcat(resultado, "setecentos");
        else if (centena == 8) strcat(resultado, "oitocentos");
        else if (centena == 9) strcat(resultado, "novecentos");

        if (centena > 0 && resto_centena > 0) {
            strcat(resultado, " e ");
        }

        if (resto_centena > 0 && resto_centena < 10) {
            // unidades: 1 a 9
            if (resto_centena == 1) strcat(resultado, "um");
            else if (resto_centena == 2) strcat(resultado, "dois");
            else if (resto_centena == 3) strcat(resultado, "tres");
            else if (resto_centena == 4) strcat(resultado, "quatro");
            else if (resto_centena == 5) strcat(resultado, "cinco");
            else if (resto_centena == 6) strcat(resultado, "seis");
            else if (resto_centena == 7) strcat(resultado, "sete");
            else if (resto_centena == 8) strcat(resultado, "oito");
            else if (resto_centena == 9) strcat(resultado, "nove");

        } else if (resto_centena >= 10 && resto_centena < 20) {
            if (resto_centena == 10) strcat(resultado, "dez");
            else if (resto_centena == 11) strcat(resultado, "onze");
            else if (resto_centena == 12) strcat(resultado, "doze");
            else if (resto_centena == 13) strcat(resultado, "treze");
            else if (resto_centena == 14) strcat(resultado, "quatorze");
            else if (resto_centena == 15) strcat(resultado, "quinze");
            else if (resto_centena == 16) strcat(resultado, "dezesseis");
            else if (resto_centena == 17) strcat(resultado, "dezessete");
            else if (resto_centena == 18) strcat(resultado, "dezoito");
            else if (resto_centena == 19) strcat(resultado, "dezenove");

        } else if (resto_centena >= 20) {
            int dezena = resto_centena / 10;
            int unidade = resto_centena % 10;

            if (dezena == 2) strcat(resultado, "vinte");
            else if (dezena == 3) strcat(resultado, "trinta");
            else if (dezena == 4) strcat(resultado, "quarenta");
            else if (dezena == 5) strcat(resultado, "cinquenta");
            else if (dezena == 6) strcat(resultado, "sessenta");
            else if (dezena == 7) strcat(resultado, "setenta");
            else if (dezena == 8) strcat(resultado, "oitenta");
            else if (dezena == 9) strcat(resultado, "noventa");

            if (unidade > 0) {
                strcat(resultado, " e ");
                if (unidade == 1) strcat(resultado, "um");
                else if (unidade == 2) strcat(resultado, "dois");
                else if (unidade == 3) strcat(resultado, "tres");
                else if (unidade == 4) strcat(resultado, "quatro");
                else if (unidade == 5) strcat(resultado, "cinco");
                else if (unidade == 6) strcat(resultado, "seis");
                else if (unidade == 7) strcat(resultado, "sete");
                else if (unidade == 8) strcat(resultado, "oito");
                else if (unidade == 9) strcat(resultado, "nove");
            }
        }
    }

    printf("Por extenso: %s", resultado);

    return 0;
}