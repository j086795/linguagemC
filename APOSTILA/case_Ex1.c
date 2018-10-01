#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int op;
    printf("\nDigite um valor entre [1 - 3]: ");
    scanf("%d",&op);
    switch (op)
    {
        case 1:
            printf("\nVocê escolheu a opção 1\n");
            break;
        case 2:
            printf("\nVocê escolheu a opção 2\n");
            break;
        case 3:
            printf("\nVocê escolher a opção 3\n");
            break;
        default:
            printf("\nOpção inválida!\n");
    }
    return 0;

}
