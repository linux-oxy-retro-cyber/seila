#include <stdio.h>

int main(){
    int numero, resultado;
    printf("digite um numero pra ver se e par ou impa : ");
    scanf("%d", &numero);
    resultado = numero % 2;
    if (resultado == 0)
    {
        printf("o numero e par\n");
    }
    else
    {
        printf("nao e par\n");
    }
    printf("%d\n", resultado);
}