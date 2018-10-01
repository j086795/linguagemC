#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  float notaFinal,notaInt,notaLab,exame;
  char nome [20];
  printf("Digite o nome do aluno(a): ");
  gets(nome);
  printf("\nDigite a nota intermediária: ");
  scanf("%f",&notaInt);
  printf("\nDigite a nota do laboratório: ");
  scanf("%f",&notaLab);
  printf("\nDigite a nota do exame final: ");
  scanf("%f",&exame);

  printf("\nSegue dados:\n");
  printf("\nAluno(a): %s",nome);
  printf("\nNota intermediária: %.1f",notaInt);
  printf("\nNota do laboratório: %.1f",notaLab);
  printf("\nNota do exame final: %.1f",exame);

  notaFinal = ((notaInt*3+notaLab*2+exame*5)/10);

  if (notaFinal >= 6)
  {
    printf("\nNota final: %.1f - Aprovado",notaFinal);
  }
  else
  {
    printf("\nNotal final: %.1f - Reprovado",notaFinal);
  }
  return 0;
}
