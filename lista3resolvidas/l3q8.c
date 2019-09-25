#include <stdio.h>>
#include <stdlib.h>


int main()
{
    int a,b,c;

    printf("Digite 3 numeros: \n");
    scanf("%i %i %i",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b)
    {
        printf("Os numeros formam um triangulo!\n");
    }else{
    printf("Os numeros nao formam um triangulo!\n");
    }

    return 0;
}
