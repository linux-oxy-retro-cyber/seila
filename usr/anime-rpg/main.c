#include <stdio.h>
// bloco inicial 
int main() {
    printf("========================================\n");
    printf("=  crie ficha do seu personagem de rpg =\n");
    printf("========================================\n");
    printf(" digite o nome do seu personagem: ");
    char name[50];
    scanf("%s", &name);
    int hp, nivel;
    printf("digite o hp agora : ");
    scanf("%d", &hp);
    printf("digite agora o level");
    scanf("%d", &nivel);
    float ouro, altura;
    printf("digite quanto de ouro seu personagem tem contando os centavos: ");
    scanf("%f", &ouro);
    printf("dite quanto de altura seu personagem tem ex 1.8 : ");
    scanf("%f", &altura);
    char estatuz[20];
    printf("digite seu estatuz ex ativo, passivo : ");
    scanf("%s", &estatuz);
    // esse codigo seila so sei que to escutando boys don't cry
    printf(" to escutando boys don't cry\n");
    // odei a merda do copilot pq ele fica tentando deixar tudo proficional mas eu nao sou proficional to mas pra irritado igual ao linus
    // agora to escutando misery o YOUTUBE pensa que eu to depresivo
    // agora vou ter que criar a parte que imprime mas to cansado, to tipo o mr robot, cansei de escola odeio matematica hahahhah
    // to fazendo isso so por robe nao sou proficional obs: so tenho 14 anos 
    // que pena que parece que o brasil e open source ja que vazou praticamente todos os cpf nomes etc nessa merda.......
    // merda o YOUTUBE ta querendo me deixar com depresao naaaaoooooooooooooooooooooo...
    // minha vida mudou quando eu mudei pra linux so assisto e programo, faz muito tempo que eu nao jogo maldito gcc
    // coisas que eu odeio java, gtk, copilot, windows todos ate a minha janela, roteador de 155 reais, bash...
    printf("============================================================\n");
    printf("= FICHA DO PERSONAGEM DE RPG E ANIME                       =\n");
    printf("============================================================\n");
    printf(" o nome :  %s                                             \n", name);
    printf(" HP : %d                                                  \n", hp);
    printf(" LEVEL : %d                                               \n", nivel);
    printf("  ALTURA : %f                                             \n", altura);
    printf(" OURO : %f                                                \n", ouro);
    printf("  STATUZ : %s                                             \n", estatuz);
    printf("============================================================\n");

return 0;
}


