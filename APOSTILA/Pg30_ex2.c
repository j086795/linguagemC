#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL,"");
    float lab,sem,nFinal,media;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f",&lab);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f",&sem);
    printf("Digite a nota do exame final: ");
    scanf("%f",&nFinal);

    media = ((lab*2)+(sem*3)+(nFinal*5))/10;

     int mediaInt = trunc (media);

    printf("\nSegue as notas:\n");
    printf("\nTrabalho de laboratório: %.2f\n",lab);
    printf("\nAvaliação semestral: %.2f\n",sem);
    printf("\nExame Final: %.2f\n",nFinal);
    printf("\nMédia final: %.2f\n",media);

    switch (mediaInt)
    {
        case 9:
            printf ("\nConceito: A\n");
            break;
        case 10:
            printf ("\nConceito: A\n");
            break;
        case 7:
            printf ("\nConceito: B\n");
            break;
        case 8:
            printf ("\nConceito: B\n");
            break;
        case 5:
            printf ("\nConceito: C\n");
            break;
        case 6:
            printf ("\nConceito: C\n");
            break;
        case 3:
            printf ("\nConceito: D\n");
            break;
        case 4:
            printf ("\nConceito: D\n");
            break;
        case 0:
            printf ("\nConceito: E\n");
            break;
        case 1:
            printf ("\nConceito: E\n");
            break;
        case 2:
            printf ("\nConceito: E\n");
            break;
    }

    return 0;

}
