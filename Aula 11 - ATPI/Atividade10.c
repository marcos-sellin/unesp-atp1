// O cardápio de uma lanchonete é o seguinte:
// Especificação    Código    Preço
// Cachorro Quente   100     R$10,00
// Bauru Simples     101     R$12,00
// Bauru com Ovo     102     R$15,00
// Hambúrguer        103     R$11,00
// Cheeseburger      104     R$15,00
// Refrigerante      105     R$3,00

// Faça um programa para perguntar quantos itens serão pedidos. Em seguida, deve-
// se ler o código dos itens e as quantidades desejadas, calculando e apresentando o

// valor a ser pago por item (preço * quantidade). Por fim, o programa exibe o total
// geral do pedido. Exemplo de execução:

// Informe quantidade de itens deste pedido: 3
// Código do item 1: 100
// Quantidade do item 1: 2
// Subtotal do item 1: 20,00
// Código do item 2: 102
// Quantidade do item 2: 1
// Subtotal do item 2: 15,00
// Código do item 3: 105
// Quantidade do item 3: 3
// Subtotal do item 3: 9,00
// Total Geral: 44,00

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero, codigo, quantidade;
    float parcial, total = 0;

    printf("/////////// CARD�PIO //////////// \n");
    printf("\n    Produto      C�digo   Pre�o \n");
    printf("Cachorro Quente   100    R$10,00 \n");
    printf(" Bauru Simples    101    R$12,00 \n");
    printf(" Bauru com Ovo    102    R$15,00 \n");
    printf("  Hamb�rguer      103    R$11,00 \n");
    printf(" Cheeseburger     104    R$15,00 \n");
    printf(" Refrigerante     105    R$3,00 \n");
    printf("\n/////////// CARD�PIO //////////// \n");

    printf("\nInforme a quantidade de itens deste pedido: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        printf("\nC�digo do item %d: ", i);
        scanf("%d", &codigo);
        printf("Quantidade do item %d: ", i);
        scanf("%d", &quantidade);

        switch(codigo){
        case 100:
            parcial = 10.00 * quantidade;
            break;
        case 101:
            parcial = 12.00 * quantidade;
            break;
        case 102:
            parcial = 15.00 * quantidade;
            break;
        case 103:
            parcial = 11.00 * quantidade;
            break;
        case 104:
            parcial = 15.00 * quantidade;
            break;
        case 105:
            parcial = 3.00 * quantidade;
            break;
        }

        printf("Subtotal do item: %.2f\n", parcial);
        total += parcial;
    }

    printf("\nTotal geral: %.2f \n", total);

return 0;
}