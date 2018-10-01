#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL,"");
    int min,taxa = 2,intervalo;
    float total;
    printf ("Digite a quantidade de minutos da ligação: ");
    scanf("%d",&min);
    if (min <= 3)
    {
        total = taxa + 1;
        printf("Total a ser pago: R$ %.2f reais",total);
    }
    else
        {
           intervalo = floor (min/5);
           total = ((intervalo*1.5)+(min*0.25)+taxa);
           printf("Total a ser pago: R$ %.2f reais",total);
        }
    return 0;
}
