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
            printf("\nVoc� escolheu a op��o 1\n");
            break;
        case 2:
            printf("\nVoc� escolheu a op��o 2\n");
            break;
        case 3:
            printf("\nVoc� escolher a op��o 3\n");
            break;
        default:
            printf("\nOp��o inv�lida!\n");
    }
    return 0;

}
