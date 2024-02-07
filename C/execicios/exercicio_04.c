#include <stdio.h>
#include <string.h>

int main(){

    double primeira, segunda, media;

    printf("Digite a primeira nota : ");
    scanf("%lf", &primeira);

    printf("Digite a segunda nota :");
    scanf("%lf", &segunda);

    media = primeira + segunda ;

    if(media >= 60.0){
        printf("NOTA = %.1lf \n", media);
        printf("APROVADO");
    }
    else{
        printf("NOTA = %.1lf \n", media);
        printf("REPROVADO");
    }
    

}