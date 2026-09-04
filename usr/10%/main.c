#include <stdio.h>

int main(){
    printf("digite um valor em dinheiro com centavos: ");
    float n, resultado;
    scanf("%f", &n);
    resultado = 1.1 * n;
    printf("o resultado e : %.4f \n", resultado);
return 0;
}