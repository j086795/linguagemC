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
    printf("Digite o m�s do nascimento: ");
    scanf("%d",&mes);
    system("cls");
    printf("Digite o ano do nascimento: ");
    scanf("%d",&ano);
    system("cls");

    if (dia > 31)
    {
        printf("\nDia inv�lido!\n");
    }
    else
        if (mes > 12)
        {
        printf("\nM�s inv�lido!\n");
        }
        else
            if (ano == 2018)
            {
                printf("\nN�o h� anivers�rio!\n");
            }
            else
                if ((mes <= 9)&&(dia < 23))
                {
                    printf("\nJ� fez anivers�rio!\n");
                }
                else
                    if ((dia == 23) && (mes == 9))
                    {
                    printf("\nParab�ns!\n");
                    }
                    else
                        printf("\nAinda far� anivers�rio!\n");

    return 0;
}
