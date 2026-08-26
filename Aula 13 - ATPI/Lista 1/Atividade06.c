// Faça um programa para ler N números e armazena-los em um vetor. O valor
// de N é fornecido pelo usuário. Em seguida, o usuário fornecerá um número N1 e
// outro número N2. Seu programa deve substituir a ocorrência de N1 por N2 no
// vetor. Por exemplo:
// Lista digitada: 4 5 6 7 3 5 2 3 6
// N1: 3
// N2: 5
// Lista alterada: 4 5 6 7 5 5 2 5 6

#include <stdio.h>

int main() {

    int N, N1, N2;

    printf("Informe a quantidade de numeros que serao digitados: ");
    scanf("%d", &N);

    int numeros[N];

    for(int i = 0; i < N; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o valor de N1: ");
    scanf("%d", &N1);

    printf("Digite o valor de N2: ");
    scanf("%d", &N2);

    printf("Lista alterada: ");

    for(int i = 0; i < N; i++){
        if(numeros[i] == N1){
            numeros[i] = N2;
        }
        printf("%d ", numeros[i]);
    }

return 0;
}