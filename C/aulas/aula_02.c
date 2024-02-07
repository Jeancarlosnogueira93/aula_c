#include <stdio.h>
#include <string.h>

int main() {

    //CASTING
    //Mesmo tipo de variavel
    int x, y;
    x = 5;
    y = 2 * x;
    printf("%d\n", x);
    printf("%d\n", y);

    /*Com variaveis diferente
    int x;
    double y;
    x = 5;
    y = 2 * x;
    printf("%d\n", x);
    printf("%.1lf\n", y);

    //Calculo da area
    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    //Sem casting
    int a, b, resultado;
    a = 5;
    b = 2;
    resultado = a / b;
    printf("%d\n", resultado)

    //Com casting
    double a;
    int b;
    a = 5.0;
    b = (int) a; //converter o doble para int
    printf("%d\n", b);*/
}