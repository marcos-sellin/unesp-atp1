// Faça um programa para ler o salário de um trabalhador e o valor da prestação de um
// empréstimo. Se a prestação for maior que 20% do salário, o programa deverá imprimir
// “Empréstimo não concedido”; caso contrário imprimirá “Empréstimo concedido”.

#include <stdio.h>

int main(){

    float salario, emprestimo;
    printf("Digite o salario do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite a prestacao do emprestimo: ");
    scanf("%f", &emprestimo);

    if(emprestimo > salario * 20 / 100){
        printf("Emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }

return 0;
}