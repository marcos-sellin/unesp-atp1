// Faça um programa que receba a idade, a altura e o peso de N
// pessoas. O valor de N será fornecido pelo usuário e indica a quantidade de
// pessoas. Após a leitura, indique:
// • Quantas pessoas possuem idade superior a 50 anos;
// • A média de altura das pessoas com idade entre 10 e 20 anos;
// • Percentual de pessoas com peso inferior a 50 quilos.

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("///// INSTRU��ES ///// \n\n");

    printf("Neste programa, voc� dever� informar: \n\n");
    printf("- A quantidade de pessoas das quais ser�o digitados os seguintes dados: \n");
    printf("* Idade, altura e peso \n\n");
    printf("- Feito isso, o programa calcular� e exibir�: \n");
    printf("* A quantidade de pesosas com idade superior a 50 anos \n");
    printf("* A m�dia de altura das pessoas com 10 a 20 anos \n");
    printf("* O percentual de pessoas com peso inferior a 50 kilogramas \n\n");

    printf("///// IN�CIO ///// \n\n");

    int pessoas, idade;
    int quant_idade = 0, quant_media_altura = 0, quant_percent_peso;
    float altura, peso, media_altura = 0, percent_peso = 0;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &pessoas);
    quant_percent_peso = pessoas;

    while(pessoas >= 1){
        printf("\nInforme a idade da pessoa (Anos): ");
        scanf("%d", &idade);
        printf("Informe a altura da pessoa (Metros): ");
        scanf("%f", &altura);
        printf("Informe o peso da pessoa (Kilogramas): ");
        scanf("%f", &peso);

        if(idade > 50){
            quant_idade++;
        }else{
            if(idade >= 10 && idade <= 20){
                quant_media_altura++;
                media_altura += altura;
            }
        }

        if(peso < 50){
            percent_peso++;
        }
        pessoas--;
    }

    media_altura /= quant_media_altura;
    percent_peso *= 100 / quant_percent_peso;
    printf("\nPesosas com idade superior a 50 anos: %d \n", quant_idade);
    printf("M�dia de altura das pessoas com 10 a 20 anos: %.2f \n", media_altura);
    printf("Percentual de pessoas com peso inferior a 50 kilogramas: %.2f \n", percent_peso);

return 0;
}