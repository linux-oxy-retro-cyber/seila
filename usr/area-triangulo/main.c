#include <stdio.h>

int main() {

 printf("esse app de terminal calcula a area de um triangulo\n");
 float n1, n2;
 float conta;
 printf("digite o tamanho da base do triangulo: ");
 scanf("%f", &n1);
 printf("digite a altura do triangulo: ");
 scanf("%f", &n2);
 conta =  (n1 * n2) /2;
 printf("o resultado e : %f\n", conta);
}

