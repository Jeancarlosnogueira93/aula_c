#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    double a,b,c,x_1,x_2 ,delta ;

    printf("Coeficiente a: ");
    scanf("%lf",&a);
    printf("Coeficiente b: ");
    scanf("%lf",&b);
    printf("Coeficiente c: ");
    scanf("%lf",&c);

    delta = (b * b) - 4*a*c;

    if(a == 0 ||delta < 0){
        printf("Esta equacao nao possui raizes reais\n");
    }
    else{
        x_1 = (-b + sqrt(delta))/(2*a);
        x_2 = (-b - sqrt(delta))/(2*a);
        printf("X1 = %.4lf\n",x_1);
        printf("X2 = %.4lf\n",x_2);
    }
}