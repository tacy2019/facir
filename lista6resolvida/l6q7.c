#include <stdio.h>
int main(void) {
char nome[5];
int idade;
printf("Escreva o seu nome: "); //Escreva Teste
scanf("%s", &nome);
printf("Escreva a sua idade: ");
scanf("%d", &idade);
if(idade > 0 && nome == "Teste") {
printf("Resultado: Encontrado");
} else {
    printf("Resultado: Nao encontrado");
    } return 0;
    }
