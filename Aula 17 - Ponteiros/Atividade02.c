// Faça uma função para receber um valor e devolver por parâmetro:
// – A raiz quadrada do número
// – O quadrado do número
// – Se é par ou impar (1 para par e 0 para ímpar)
// void calcular(int n, double *raiz, double *quadrado, int *par);

#include <stdio.h>
#include <math.h>

void calcular(int n, double *raiz, double *quadrado, int *par){

    *raiz = sqrt(n);
    *quadrado = pow(n, 2);

    if(n % 2 == 0){
        *par = 1;
    }else{
        *par = 0;
    }

}

int main() {

    int n, par;
    double raiz, quadrado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    calcular(n, &raiz, &quadrado, &par);

    printf("Raiz quadrada do numero: %.2f \n", raiz);
    printf("Quadrado do numero: %.2f \n", quadrado);
    
    if(par == 1){
        printf("O numero e par");
    }else{
        printf("O numero nao e par");
    }

return 0;
}