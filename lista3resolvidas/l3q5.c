#include <stdio.h>>
#include <stdlib.h>


int main()
{
    int a,b,c;

    printf("Digite 3 valores: \n");
    scanf("%i %i %i",&a,&b,&c);
    while(a==b,b==c,a==c)
    {
        printf("Os numeros nao podem ser iguais\n");
        printf("Digite 3 valores: \n");
        scanf("%i %i %i",&a,&b,&c);
    }
    if(a>b&&a>c)
    {
        printf("O numero %i e o maior.\n",a);
    }else{
    if(a<b&&b>c)
    {
        printf("O numero %i e o maior.\n",b);
    }else{
        printf("O numero %i e o maior.\n",c);
    }
    }

    return 0;
}
