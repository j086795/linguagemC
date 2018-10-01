#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL,"");
    int i;
    for (i = 0;i <=50;i+=2)
    {
    printf("%d\n",i);
    }
    return 0;

}
