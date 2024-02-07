#include <stdio.h>
#include <string.h>


int main (){

    int x, y;

    printf("Digite dois numero : \n");
    scanf("%d",&x);
    scanf("%d",&y);

    while(x != y){
        if(x > y){
            printf("DECRESCENTE! \n");
            printf("Digite outros dois numeros: \n");
            scanf("%d", &x);
            scanf("%d", &y);
        }
        else{
            printf("CRESCENTE! \n");
            printf("Digite outros dois numeros: \n");
            scanf("%d", &x);
            scanf("%d", &y);
        }
    }
}