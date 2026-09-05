#include <stdio.h>

int main() {
    printf("isso e uma calculadora que divide subtrai multiplica e soma vc so precisa digitar dois numeros\n");
    float n1, n2, dividir, multiplicar, somar, subtrair;
    printf("digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("digite o segundo numero: ");
    scanf("%f", &n2);
    dividir = n1 / n2;
    multiplicar = n1 * n2;
    somar = n1 + n2;
    subtrair = n1 - n2;
    printf("o resultado da subtraçao e : %.3f \n", subtrair);
    printf("o resultado da adiçao e : %.3f\n", somar);
    printf("o resultado da multiplicaçao e : %f\n", multiplicar);
    printf("o resultado da divisao e : %.3f\n", dividir);
return 0;
}