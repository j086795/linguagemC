#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    char ex;
    printf("Digite o sexo [M/F]: ");
    scanf ("%c",&ex);
    switch (ex)
    {
        case 'M':
            printf("\nMasculino\n");
            break;
        case 'F':
            printf("\nFeminino\n");
            break;
        case 'm':
            printf("\nMasculino\n");
            break;
        case 'f':
            printf("\nFeminino\n");
            break;
        default:
            printf("\nOpção inválida!\n");
    }
    return 0;

}
