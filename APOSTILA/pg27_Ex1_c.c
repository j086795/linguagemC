#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  float n1,n2,n3,media,mediaPonderada;
  char nome [20];
  printf("Digite o nome do Aluno: ");
  gets(nome);
  printf("Digite o valor da primeira nota: ");
  scanf("%f",&n1);
  printf("Digite o valor da segunda nota: ");
  scanf("%f",&n2);
  printf("Digite o valor da terceira nota: ");
  scanf("%f",&n3);

  media = ((n1+n2+n3)/3);
  mediaPonderada = (((n1*3)+(n2*2)+(n3*4))/9);

  printf("Segue os dados: \n");
  printf("\nNome do Aluno: %s",nome);
  printf("\nNota da primeira prova: %.2f",n1);
  printf("\nNota da segunda prova: %.2f",n2);
  printf("\nNota da terceira prova: %.2f",n3);
  printf("\nMédia aritmética: %.2f",media);
  printf("\nMédia ponderada: %.2f",mediaPonderada);

  if (media>mediaPonderada)
  {
    printf("\n\nA média considerada foi %.2f\n",media);
  }
  else
  {
    printf("\n\nA média considerada foi %.2f\n",mediaPonderada);
  }
  return 0;
}
