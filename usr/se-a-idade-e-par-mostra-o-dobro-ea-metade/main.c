#include <stdio.h>

int main(){
    int numero, resultado, dob, me;
    printf("digite sua idade pra ver se e par ou impa e se impa mostra o dobro ea metade : ");
    scanf("%d", &numero);
    resultado = numero % 2;
    if (resultado == 0)
    {
        printf("o numero e par\n");
        dob = numero * 2;
        me = numero / 2;
        printf("o dobro e : %d \n", dob);
        printf("a metade e : %d \n", me);
    }
    else
    {
        printf("nao e par\n");
    }
   
}