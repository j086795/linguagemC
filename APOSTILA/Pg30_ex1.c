#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL,"");
    int DiaSem;

    printf("Digite um n�mero inteiro entre 1 e 7: ");
    scanf("%d",&DiaSem);

    switch (DiaSem)
    {
        case 2:
            printf("\nSegunda-Feira\n");
            break;
        case 3:
            printf("\nTer�a-Feira\n");
            break;
        case 4:
            printf("\nQuarta-Feira\n");
            break;
        case 5:
            printf("\nQuinta-Feira\n");
            break;
        case 6:
            printf("\nSexta-Feira\n");
            break;
        case 7:
            printf("\nS�bado\n");
            break;
        case 1:
            printf("\nDomingo\n");
            break;
        default:
            printf("\nN�mero inv�lido\n");

    }
    return 0;
}
