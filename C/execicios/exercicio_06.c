#include <stdio.h>
#include <string.h>

int main(){

    int a,b,c;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);

    if(a < b && a < c){
        printf("Menor = %d", a);
    }
    else if (b < a && b <c){
        printf("Menor = %d", b);
    }
    else{
        printf("Menor = %d", c);
    }
}