// O cardápio de uma lanchonete é dado pela tabela abaixo. Escreva um programa
// que leia o código do item adquirido pelo consumidor e a quantidade, calculando
// e mostrando o total a pagar. Não será necessário exibir o produto e o valor,
// somente o valor final.
// Código        Produto Preço
//  100     Cachorro quente R$ 7.00
//  101      Bauru simples R$ 5.00
//  102       Hamburguer R$ 10.00
//  103      Cheeseburger R$ 12.00
//  104      Refrigerante R$ 3.00

#include <stdio.h>

int main(){

    int codigo, quantidade;
    printf("MENU");
    printf("\n100 - Cachorro quente (R$7.00)");
    printf("\n101 - Bauru simples (R$5.00)");
    printf("\n102- Hamburguer (R$10.00)");
    printf("\n103- Cheeseburger (R$12.00)");
    printf("\n104- Refrigerante (R$3.00)\n");
    printf("\nInforme o codigo do produto (100 a 104): ");
    scanf("%d", &codigo);
    printf("Informe quanto do produto sera comprado: ");
    scanf("%d", &quantidade);

    switch(codigo){
    case 100:
        printf("\nTotal: %d", quantidade * 7);
        break;
    case 101:
        printf("\nTotal: %d", quantidade * 5);
        break;
    case 102:
        printf("\nTotal: %d", quantidade * 10);
        break;
    case 103:
        printf("\nTotal: %d", quantidade * 12);
        break;
    case 104:
        printf("\nTotal: %d", quantidade * 3);
        break;
    default:
        printf("\nInvalido");
        break;
    }

return 0;
}