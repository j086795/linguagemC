#include<stdio.h>
int main()
{
    int idade,contador21=0,contador50=0;
    do
    {printf("\n DIGITE A IDADE(PARA ENCERRAR DIGITE -99) : ");
    scanf("%d",&idade);
    if(idade==-99) break;
    if(idade<21)
    contador21++;
    if(idade>50)
    contador50++;
    }while(idade!=-99);
    printf("\n TOTAL DE PESSOAS COM MENOS DE 21 ANOS E:%d",contador21);
    printf("\n TOTAL DE PESSOAS COM MAIS DE 50 ANOS E:%d",contador50);
    printf("\n\n");
    return(0);
}
