#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    int i;
    float nota,maior,menor,soma=0,media;
    char c;

    for (i=1;i<6;i++)
    {
        do
        {
            printf("Digite o sexo [M/F]: \n");
            scanf("%c",&c);
            system("cls");
        }
        while((c!='M') && (c!='F'));

        do
        {
            printf("Digite o valor da nota: ");
            scanf("%f",&nota);
            system("cls");
        }
        while((nota < 0) || (nota  > 10));

      soma+=nota;
      if (i==1)
      {
          maior = nota;
          menor = nota;
      }
      else
      {
          if (nota > maior)
          {
              maior = nota;
          }

          if (nota < menor)
          {
              menor = nota;
          }
      }
    }
    printf("Segue dados: \n");
    printf("\nMaior nota: %.2f\n",maior);
    printf("\nMenor nota: %.2f\n",menor);
    printf("\nMédia das notas: %.2f\n",media = (soma/5));

    return 0;
}
