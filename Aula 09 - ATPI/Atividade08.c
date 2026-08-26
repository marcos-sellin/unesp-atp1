// Faça um programa para ler a média final de N alunos. O valor de N será
// fornecido pelo usuário e indica a quantidade de alunos. O seu programa
// deve considerar médias entre 0 e 10, isto é, se o usuário digitar uma nota
// fora desse intervalo, o programa deve avisar o usuário e aguardar a
// inserção de uma nota dentro intervalo indicado. Exibir ao final a média de
// notas.

#include <stdio.h>

int main(){

    int alunos, quantidade;
    float nota, media;
    printf("Informe a quantidade de alunos na sala: ");
    scanf("%d", &alunos);
    quantidade = alunos;

    while(alunos >= 1){
        printf("Informe a media do aluno: ");
        scanf("%f", &nota);

        if(nota < 1 || nota > 10){
        printf("A nota informada e invalida");
        return 0;
    }

        media += nota;
        alunos--;
    }

    media /= quantidade;
    printf("\nA media da sala e %.1f: ", media);

return 0;
}