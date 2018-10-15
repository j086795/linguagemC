#include <stdio.h>

int main ()
{
    int i,soma = 0;
    for (i=1;i<=100;i++)
    {
    if (i%5==0)
    continue;
    soma+=i;
    printf("i = %d e soma = %d\n",i,soma);
    }
    printf("Soma %d",soma);
    return 0;
}
