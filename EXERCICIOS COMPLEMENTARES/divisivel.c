#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int i,n;
    for (i=1;i<=1000000;i++)
    if ((i%11 == 0) && (i%13 == 0) && (i%17 == 0))
    {
    printf("O numero e: %d",i);
    break;
    }
    return 0;
}
