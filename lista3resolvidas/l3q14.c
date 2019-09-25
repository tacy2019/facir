#include <stdio.h>
#include <stdlib.h>


int main()
{
    float n1,n2,r;

    printf("Insira dois numeros para divisao: \n");
    scanf("%f%f",&n1,&n2);
    while(n2==0)
    {
        system("cls");
        printf("O divisor nao pode ser igual a 0.\n");
        printf("Insira um novo divisor para %.1f. \n",n1);
        scanf("%f",&n2);
    }
    r=n1/n2;

    printf("%.1f / %.1f = %.1f\n",n1,n2,r);

    return 0;
}
