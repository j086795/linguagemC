#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,subtracao;
    printf ("Digite um valor para a:");
    scanf ("%f",&a);
    printf ("Digite um valor para b:");
    scanf ("%f",&b);
    subtracao = a-b;
    printf ("O resultado é %.2f",subtracao);
    return 0;
}
