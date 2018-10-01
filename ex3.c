#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL,"");
    float a;
    printf("Coloque o valor: ");
    scanf("%f", &a);
    a = a*a;
    printf("O quadrado é %.2f", a);
    return 0;
}

