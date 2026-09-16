#include <stdio.h>
#include <stdlib.h>

// este e apenas um app simples onde eu vou usar funçoes

void inicial(){
    system("clear");
    printf("============================================================================================\n");
    printf("= Bem vindo ha este app simples que ultiza funçoes                                         =\n");
    printf("============================================================================================\n");
    printf(" ███   ███  ████  █████      █████  ████  ████ █████ █   █ █████ ███  ███  █           ███  \n");
    printf("█     █   █ █   █ █          █     █     █     █     ██  █   █    █  █   █ █          █     \n");
    printf("█     █   █ █   █ ████  ████ ████   ███   ███  ████  █ █ █   █    █  █████ █     ████ █\n");
    printf("█     █   █ █   █ █          █         █     █ █     █  ██   █    █  █   █ █          █     \n");
    printf(" ███   ███  ████  █████      █████ ████  ████  █████ █   █   █   ███ █   █ █████       ███  \n");
    printf("============================================================================================\n");
}

void seila(){
    printf("oi digite seu primeiro nome : ");
    char name[50];
    scanf("%s", &name);
    printf("Gostei do seu nome %s \n", name);
    printf("oque vamos fazer %s?\n", name);

}

void comands(){
    printf("digite para as os opçao, OBS: so para fedora BTW\n");
    printf("1 para atualizar a lista de apps \n");
    printf("2 para atualizar os pacotes\n");
    printf("3 para ver a versao do kernel\n");
    printf("Comando : ");
    int n;
    scanf("%d", &n);
    if(n == 1){
        system("sudo dnf check-updade");
    }
    else if(n == 2){
        system("sudo dnf upgrade -y");
    }
    else if(n == 3){
        system("uname -r");
    }
    else{
        printf("comando errado ou nao entendido\n");
    }
}

int main(){
    inicial();
    seila();
    comands();
}