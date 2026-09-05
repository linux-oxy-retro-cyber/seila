#include <stdio.h>

int main() {
    int idade;
    printf("esse appverifica se vc e maior de idade\n");
    printf("digite sua idade : ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
       printf("vc e maior de idade\n"); 
    }
    else if (idade < 18)
    {
        printf("vc nao e maior de idade\n");
    }
    else{
        printf("nao entendido");
    }
}