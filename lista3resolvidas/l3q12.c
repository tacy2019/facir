#include <stdio.h>
#include <stdlib.h>

/*12)	Ler a descri��o do produto (nome), a quantidade adquirida e o pre�o unit�rio. Calcular e
/escrever o total (total = quantidade adquirida * pre�o unit�rio), o desconto e o total a pagar
/(total a pagar = total - desconto), sabendo-se que:
/-	Se quantidade <= 5 o desconto ser� de 2%
/- 	Se quantidade > 5 e quantidade <=10 o desconto ser� de 3%
/-	Se quantidade > 10 o desconto ser� de 5%
*/

int main()
{

    char nome[15];
    float pu,t,tp,e;
    int qa;

    printf("Insira o nome do produto: \n");
    scanf("%s",nome);
    printf("Insira o preco e a quantidade adquirida: \n");
    scanf("%f %i",&pu,&qa);
    t=qa*pu;
    if (qa<=5)
    {
        tp=t-t*0.02;
        e=t-tp;
        printf("Produto: %s\nQuantidade: %i\n",nome,qa);
        printf("Preco total: %.2f reais\nDesconto: 2%%\nEconomia: %.2f reais\nPreco final: %.2f reais \n",t,e,tp);
    }else{
    if (qa>10)
    {
        tp=t-t*0.05;
        e=t-tp;
        printf("Produto: %s\nQuantidade: %i\n",nome,qa);
        printf("Preco total: %.2f reais\nDesconto: 5%%\nEconomia: %.2f reais\nPreco final: %.2f reais \n",t,e,tp);
    }else{
        tp=t-t*0.03;
        e=t-tp;
        printf("Produto: %s\nQuantidade: %i\n",nome,qa);
        printf("Preco total: %.2f reais\nDesconto: 3%%\nEconomia: %.2f reais\nPreco final: %.2f reais \n",t,e,tp);
    }

}

return 0;
}
