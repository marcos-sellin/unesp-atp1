// Faça um programa que leia duas notas de um aluno, verifique se as notas são válidas e exiba
// na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
// 10.0. Caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
// programa termina.

#include <stdio.h>

int main(){

    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if(nota1 < 0 || nota1 > 10){
        printf("A nota 1 e invalida");
    }else{
        if(nota2 < 0 || nota2 > 10){
            printf("A nota 2 e invalida");
        }else{
            media = (nota1 + nota2) / 2;
            printf("A media das notas e: %.1f", media);
        }
    }

return 0;
}