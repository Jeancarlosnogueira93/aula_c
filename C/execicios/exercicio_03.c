#include <stdio.h>
#include <string.h>

int main(){

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira Pessoa :\n");
    printf("NOME = ");
    gets(nome1);
    
    printf("IDADE = \n");
    printf("%d", &idade1);

    printf("Dados da Segunda Pessoa :\n");
    printf("NOME = ");
    fseek(stdin, 0,SEEK_END);
    gets(nome2);
    printf("IDADE = ");
    printf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos",nome1,nome2,media);

    return 0;
}