// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

#include <stdio.h>

int main() {

    int segundos, minutos, horas;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;

    printf("Tempo em minutos: %d\n", minutos);
    printf("Tempo em horas: %d", horas);
    
return 0;
}