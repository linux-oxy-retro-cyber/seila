#include <stdio.h>
#include <stdlib.h> //nesesario pra executar comandos no linux

int main(){
    system("clear");
    printf("=================================================================\n");
    printf("= ultilitario base do Fazt Linux  desenvolvido por @fprowindows =\n");
    printf("=================================================================\n");
    printf("1 para testar a rede\n");
    printf("2 pra ver a versao do kernel\n");
    int n;
    printf("digite : ");
    scanf("%d", &n);
    if (n == 1){
        system("clear");
        printf("testando a rede\n");
        system("ping google.com");
    }
    else if (n == 2){
     system("clear");
     printf("vendo a versao do kernel \n");
     system("uname -r");
    }
    else{
        printf("nao entendido");
    }
return 0;
}