#include <stdio.h>

int main(){
    printf("oi esse app verifica se vc tem idade pra votar no brasil\n");
    int idade;
    printf("digite sua idade : ");
    scanf("%d", &idade);
    if (idade < 16){
        printf("vc nao pode votar\n");
    }
    else if (idade >= 18 && idade <= 65){
        printf("seu voto e obrigatorio!!!\n");
    }
    else{
        printf("seu voto nao e obrigatorio\n88");
    }
return 0;
}