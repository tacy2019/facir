#include <stdio.h>>
#include <stdlib.h>

int main()
{
    int a,b,c,r;//r-resultado

    printf("Digite 3 valores: \n");
    scanf("%i %i %i",&a,&b,&c);
    while(a==b,b==c,a==c)
    {
        printf("Os numeros nao podem ser iguais.\n");
        printf("Digite 3 valores: \n");
        scanf("%i %i %i",&a,&b,&c);
    }
    if (a<b && a<c)
    {
        r=b+c;
        printf("\n%i + %i = %i\n\n",b,c,r);
    }else{
        if (b<a && b<c)
        {
        r=a+c;
        printf("\n%i + %i = %i\n\n",a,c,r);
    }else
    {
        r=a+b;
        printf("\n%i + %i = %i\n\n",a,b,r);
    }
        }

return 0;
}
