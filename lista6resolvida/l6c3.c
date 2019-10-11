#include <stdio.h>
void main(){
    char nome[20];
    printf("Informar um nome:");
    gets(nome);
    if(nome[0]=='a' || nome[0]=='A'){
        printf("%s",nome);

    }

}
