#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float p1,p2,t1,t2,lista,media;

    setlocale(LC_ALL,"");
    printf("Digite a nota da primeira prova\n");
    scanf("%f",&p1);
    printf("Digite a nota da segunda prova\n");
    scanf("%f",&p2);
    printf("Digite a nota do primeiro trabalho\n");
    scanf("%f",&t1);
    printf("Digite a nota do segundo trabalho\n");
    scanf("%f",&t2);
    printf("Digite a nota da lista de exercicios\n");
    scanf("%f",&lista);

    media = (((p1*6)+(p2*6)+(t1*3)+(t2*3)+(lista*1))/19);

    printf("A média é %.2f",media);
}
