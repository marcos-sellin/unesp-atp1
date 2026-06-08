// Faça um programa para ler o número do mês e escrever o nome do mês por extenso. Por
// exemplo:
// - Digite o número do mês: 6
// - Mês por extenso: junho

#include <stdio.h>

int main(){

    int mes;
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    if(mes < 1 || mes > 12){
        printf("O mes nao existe");
    }else{

    if(mes == 1){
        printf("Mes por extenso: janeiro");
    }

    if(mes == 2){
        printf("Mes por extenso: fevereiro");
    }

    if(mes == 3){
        printf("Mes por extenso: marco");
    }

    if(mes == 4){
        printf("Mes por extenso: abril");
    }

    if(mes == 5){
        printf("Mes por extenso: maio");
    }

    if(mes == 6){
        printf("Mes por extenso: junho");
    }

    if(mes == 7){
        printf("Mes por extenso: julho");
    }

    if(mes == 8){
        printf("Mes por extenso: agosto");
    }

    if(mes == 9){
        printf("Mes por extenso: setembro");
    }

    if(mes == 10){
        printf("Mes por extenso: outubro");
    }

    if(mes == 11){
        printf("Mes por extenso: novembro");
    }

    if(mes == 12){
        printf("Mes por extenso: dezembro");
    }
    }

return 0;
}