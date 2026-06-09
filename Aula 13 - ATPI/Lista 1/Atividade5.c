// Faça um programa para ler N números e armazena-los em um vetor. O valor
// de N é fornecido pelo usuário. Em seguida, o usuário fornecerá um número. Seu
// programa deve verificar se esse número está na lista de valores digitados pelo
// usuário, ou seja, verificar se esse valor está no vetor. Por exemplo:
// Lista digitada: 4 5 6 7 3 5 2 3 6
// Número: 3
// O número 3 está no vetor
// Lista digitada: 4 5 6 7 3 5 2 3 6
// Número: 9
// O número 9 não está no vetor

#include <stdio.h>

int main(){

    int N;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &N);
    printf("\n");

    float media, notas[N];

    for(int i = 0; i < N; i++){
        printf("Informe a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= N;
    printf("\nMedia da sala: %.1f\n", media);
    printf("\nAlunos acima da media: ");

    for(int j = 0; j < N; j++){
        if(notas[j] > media){
            printf("\nAluno %d: %.1f", j, notas[j]);
        }
    }

printf("\n");
return 0;
}