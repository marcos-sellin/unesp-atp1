// Faça um programa para calcular e mostrar o salário reajustado de um funcionário. Se o salário for
// até R$ 1000,00 o reajuste será 20%, se entre R$ 1000,00 e R$ 2000,00 o reajuste será de 10%, caso
// contrário, não haverá reajuste.

#include <stdio.h>

int main(){

    float salario, reajuste;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if(salario <= 1000){
        printf("O reajuste e de 20/100 \n");
        reajuste = salario + (salario * 20 / 100);
        printf("O novo salario e de: %.2f", reajuste);
    }else{
        if(salario <= 2000){
            printf("O reajuste e de 10/100 \n");
            reajuste = salario + (salario * 10 / 100);
            printf("O novo salario e de: %.2f", reajuste);
        }else{
            printf("Nao houve reajuste \n");
            printf("O salario e de %.2f", salario);
        }
    }

return 0;
}