// Faça um programa para ler uma string com uma data no formato
// “DD/MM/AAAA”. Após a leitura, o programa deve verificar se a data fornecida
// pelo usuário está no formato exigido.

#include <stdio.h>

int main() {

    int tamanho = 0, errado = 0, dia, mes, ano;
    char data[100];

    printf("Digite uma data (DD/MM/AAAA): ");
    fgets(data, 100, stdin);

    for(int i = 0; data[i] != '\0'; i++){
        tamanho++;
    }

    if (tamanho > 0 && data[tamanho - 1] == '\n') {
        data[tamanho - 1] = '\0';
        tamanho--;
    }

    if(data[2] != '/' || data[5] != '/' || tamanho != 10){
        errado++;
    }else{
        dia = 10 * (data[0] - '0') + (data[1] - '0');
        mes = 10 * (data[3] - '0') + (data[4] - '0');
        ano = 1000 * (data[6] - '0') + 100 * (data[7] - '0') + 10 * (data[8] - '0') + (data[9] - '0');

        if(dia < 1 || dia > 31){
            errado++;
        }

        if(mes < 1 || mes > 12){
            errado++;
        }

        if(ano < 1){
            errado++;
        }
    }

    if(errado > 0){
        printf("A data nao esta no formato exigido");
    }else{
        printf("A data esta no formato exigido");
    }

return 0;
}