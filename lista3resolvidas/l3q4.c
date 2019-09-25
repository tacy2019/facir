#include <stdio.h>
#include <stdlib.h>


int main()
{
    int v;

    printf("Insira um numero: \n");
    scanf("%i",&v);

    if(v==0)
    {
        printf("Zero.\n",v);
    }else{
    if(v>0)
    {
        printf( "Positivo.\n",v);
    }else{
        printf("Negativo.\n",v);
    }
    }

    return 0;
}

