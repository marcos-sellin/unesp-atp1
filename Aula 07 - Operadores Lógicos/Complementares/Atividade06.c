// Leia uma data e determine se ela é válida. Para tanto, verifique se o mês está
// entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em
// anos bissextos e 28 dias em anos não bissextos.

#include <stdio.h>

int main() {
    int dia, mes, ano;
    int valida = 1;

    printf("Informe o dia (dd/mm/aaaa): ");
    scanf("%d", &dia);
    printf("Informe o mes (%d/mm/aaaa): ", dia);
    scanf("%d", &mes);
    printf("Informe o ano (%d/%d/aaaa): ", dia, mes);
    scanf("%d", &ano);

    if (ano < 1 || mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        valida = 0;
    } 
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        valida = 0;
    } 
    else if (mes == 2) {
        int bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
        
        if (bissexto && dia > 29) {
            valida = 0;
        } else if (!bissexto && dia > 28) {
            valida = 0;
        }
    }

    if (valida) {
        printf("A data e valida\n");
    } else {
        printf("A data e invalida\n");
    }

    return 0;
}