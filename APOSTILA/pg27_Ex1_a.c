# include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    int idade;
    char sexo;

    setlocale(LC_ALL,"");
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    fflush(stdin);
    printf("\nDigite o sexo (M/F): ");
    scanf("%c",&sexo);

    if ((idade>=18) && (sexo=='M'))
    {
        printf("\nMaior de idade, já pode dirigir!\n");
        printf("\nAlistamento militar obrigatório!\n\n");
    }
    else
    {
        if ((idade>=18) && (sexo=='F'))
        {
            printf("\nMaior de idade, já pode dirigir!\n\n");
        }
        else
        {
            printf("\nMenor de idade!\n\n");
        }
    }

return 0;
}
