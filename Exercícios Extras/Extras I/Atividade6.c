#include <stdio.h>

int main(){

    int dia, mes, ano;
    printf("Informe um dia (XX/xx/xxxx): ");
    scanf("%d", &dia);

    if(dia < 1 || dia > 31){
        printf("\nO dia '%d' e invalido", dia);
        return 0;
    }

    printf("Informe um mes (%d/XX/xxxx): ", dia);
    scanf("%d", &mes);

    if(mes < 1 || mes > 12){
        printf("\nO mes '%d' e invalido", mes);
        return 0;
    }else{
    if(mes == 2 && dia > 29){
        printf("\nO dia informado e invalido para o mes '%d'", mes);
        return 0;
    }else{
    if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
        printf("\nO dia informado e invalido para o mes '%d'", mes);
        return 0;
              }
         }
    }

    printf("Informe um ano (%d/%d/XXXX): ", dia, mes);
    scanf("%d", &ano);

    if(ano < 0){
        printf("\nO ano '%d' e invalido", ano);
    }else{
        if(!(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) && mes == 2 && dia > 28 ){
                printf("\nO ano '%d' nao e bissexto, logo o mes '%d' tem '%d' dias", ano, mes, dia - 1);
        }
    }

    printf("\nA data (%d/%d/%d) e valida\n\n", dia, mes, ano);

return 0;
}
