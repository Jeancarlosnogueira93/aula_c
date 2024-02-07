#include <stdio.h>
#include <string.h>

int main(){
    double idade,media,soma,contador ;

    printf("Digite as idade: \n");
    scanf("%lf", &idade);
    soma = 0;
    contador = 0;

    if (idade <0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{
        while(idade > 0 ){
            soma = soma + idade;
            contador = contador +1;
            scanf("%lf", &idade);
        }
    }
    media = soma / contador;
    printf("MEDIA = %.2lf", media);
}