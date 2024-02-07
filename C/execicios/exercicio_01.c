#include <stdio.h>
#include <string.h>

int main(){

    double largura, comprimento, metro, area, preco;

    printf("Digite o largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metro);

    area = largura * comprimento;
    preco = area * metro;

    printf("Area do terreno = %.2lf \n", area);
    printf("Preco do terreno = %.2lf \n",preco);

}