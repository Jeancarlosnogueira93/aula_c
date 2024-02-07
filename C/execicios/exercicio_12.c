#include <string.h>
#include <stdio.h>

int main(){
    int n, soma,media;

    printf("Quantidade numeros vai digitado ?");
    scanf("%d", &n);
    double vet[n];

    soma=0;
    for (int i = 0 ; i < n ; i++){
        printf("Digite um numero :");
        scanf("%lf", &vet[i]);
    }
    
    printf("\n VALORES =");

    for(int i = 0 ; i < n ; i++){
        printf("%.1lf ", vet[i]);
    }
    soma=0;
    for (int i = 0 ; i < n ; i++){
        soma = soma + vet[i];
    }
    media = soma / n;
    printf("\n");
    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf", media);
}