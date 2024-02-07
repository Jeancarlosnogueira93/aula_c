#include <stdio.h>
#include <string.h>

int main(){    
    int x, y, s ;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &x);

    y = 0;
    for(y = 1; y <= 10; y++){
        s = x * y;
        printf("%d x %d = %d\n",x,y,s);
    }
}