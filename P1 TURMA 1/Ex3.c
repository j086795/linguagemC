#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL,"");
    int dia,mes,ano;

    printf("Digite o dia do nascimento: ");
    scanf("%d",&dia);
    system("cls");
    printf("Digite o mês do nascimento: ");
    scanf("%d",&mes);
    system("cls");
    printf("Digite o ano do nascimento: ");
    scanf("%d",&ano);
    system("cls");

    if (dia > 31)
    {
        printf("\nDia inválido!\n");
    }
    else
        if (mes > 12)
        {
        printf("\nMês inválido!\n");
        }
        else
            if (ano == 2018)
            {
                printf("\nNão há aniversário!\n");
            }
            else
                if ((mes <= 9)&&(dia < 23))
                {
                    printf("\nJá fez aniversário!\n");
                }
                else
                    if ((dia == 23) && (mes == 9))
                    {
                    printf("\nParabéns!\n");
                    }
                    else
                        printf("\nAinda fará aniversário!\n");

    return 0;
}
