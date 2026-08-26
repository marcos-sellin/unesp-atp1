// Faça um programa para ler a média e a frequência de um aluno. Em seguida,
// verificar se ele está aprovado, em exame ou reprovado. Para tanto considere as
// seguintes regras:
// - O aluno é aprovado se estiver com média acima de cinco e frequência acima
// de setenta;
// - O aluno está em exame se estiver com média entre três e cinco e frequência
// acima de setenta;
// - O aluno é reprovado se estiver com média abaixo de três ou frequência
// abaixo de setenta.
// Para este exercício, considere que os valores são corretamente fornecidos pelo
// usuário, isto é, a média está entre 0 e 10; e a frequência está em 0 e 100.

#include <stdio.h>

int main() {

    int frequencia;
    float media;

    printf("Informe a media do aluno (0 a 10): ");
    scanf("%f", &media);
    printf("Informe a frequencia do aluno (0 a 100%): ");
    scanf("%d", &frequencia);

    if(media > 5 && frequencia > 70){
        printf("O aluno foi aprovado");
    }else if(media >= 3 && frequencia > 70){
        printf("O aluno esta de exame");
    }else{
        printf("O aluno esta reprovado");
    }

return 0;
}