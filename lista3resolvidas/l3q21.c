#include <stdio.h>
#include <stdlib.h>

/*21)	Escreva as seguintes sequ�ncias de n�meros: (1, 1 2 3 4 5 6 7 8 9 10) (2, 1 2 3 4 5 6 7 8 9 10)
/(3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, at� que o
/primeiro n�mero (antes da v�rgula), tamb�m chegue a 10.
*/

int main()
{
    int x;

    for(x=1;x<=10;x++)
    {
        printf("(%i, 1 2 3 4 5 6 7 8 9 10)\n",x);
    }
    return 0;
}
