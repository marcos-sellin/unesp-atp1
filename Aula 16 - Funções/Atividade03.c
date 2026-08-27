// Faça uma função para receber como parâmetro valores representando horas,
// minutos e segundos. Em seguida, retorne a quantidade em segundos

#include <stdio.h>

int tempoParaSegundos(int horas, int minutos, int segundos) {

    int total_segundos;

    total_segundos = (horas * 60 * 60) + (minutos * 60) + segundos;

return total_segundos;
}

int main() {

    int horas, minutos, segundos, total_segundos;

    printf("Digite um numero de horas: ");
    scanf("%d", &horas);

    printf("Digite um numero de minutos: ");
    scanf("%d", &minutos);

    printf("Digite um numero de segundos: ");
    scanf("%d", &segundos);

    total_segundos = tempoParaSegundos(horas, minutos, segundos);

    printf("Tempo total em segundos: %d", total_segundos);

return 0;
}