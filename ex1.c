#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0, b = 0;
    printf("Coloque o primeiro valor: ");
    scanf("%d", &a);
    printf("Coloque o segundo valor: ");
    scanf("%d", &b);
    a = a*2;
    b = b*3;
    printf("O dobro do primeiro e %d, e o triplo do segundo e %d", a ,b);
    return 0;
}
