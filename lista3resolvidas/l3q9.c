#include <stdio.h>>
#include <stdlib.h>

int main()
{
    char time1[15],time2[15];
    int gol1,gol2;

    printf("Insira o nome do primeiro time: \n");
    gets(&time1);
    printf("Insira o nome do segundo time: \n");
    gets(&time2);
    printf("Quantos gols o time do %s fez? \n",time1);
    scanf("%i",&gol1);
    printf("Quantos gols o time do %s fez? \n",time2);
    scanf("%i",&gol2);

    if(gol1==gol2)
    {
        printf("O jogo foi empate!\n%s %i X %i %s.\n",time1,gol1,gol2,time2);
    }else{
    if(gol1>gol2)
    {
        printf("O Time do %s venceu!\n%s %i X %i %s\n.",time1,gol1,gol2,time2);
    }else{
        printf("O Time do %s venceu!\n%s %i X %i %s.\n",time1,gol1,gol2,time2);
    }
    }

    return 0;
}
