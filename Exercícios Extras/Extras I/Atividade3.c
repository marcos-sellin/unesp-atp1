#include <stdio.h>

int main(){

    float media, frequencia;
    printf("Informe a media do aluno: ");
    scanf("%f", &media);
    if(media > 10 || media < 0){
        printf("a media e invalida \n");
        return 0;
    }
    printf("Informe a frequencia do aluno (em porcentagem):");
    scanf("%f", &frequencia);
    if(frequencia > 100 || frequencia < 0){
        printf("a frequencia e invalida \n");
        return 0;
    }

    if(media >= 5 && frequencia >= 70){
        printf("O aluno foi aprovado");
    }else{
        if(media >= 3 && frequencia >= 70){
            printf("O aluno esta em exame");
        }else{
            printf("O aluno foi reprovado");
            }
        }

return 0;
}

