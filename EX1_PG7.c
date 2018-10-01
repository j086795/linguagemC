#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,dobro,triplo;
    printf ("Digite um numero inteiro: ");
    scanf ("%d",&a);
    printf ("Digite outro numero inteiro: ");
    scanf ("%d",&b);
    dobro = a*2;
    triplo = b*3;
    printf ("O dobro de %d é %d e o triplo de %d é %d",a,dobro,b,triplo);
}
