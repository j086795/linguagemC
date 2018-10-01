#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  char nome[20];
  int cargaHoraria;
  float salarioHora,horaExtra,salarioTotal;
  horaExtra=0;
  printf("\nDigite o nome do Funcionário: ");
  gets(nome);
  printf("\nDigite a carga horária diária: ");
  scanf("%d",&cargaHoraria);
  printf("\nDigite o salário/hora: ");
  scanf("%f",&salarioHora);
  if (cargaHoraria>8)
  {
    horaExtra = (cargaHoraria-8)*(salarioHora*1.5);
    salarioTotal = (8*salarioHora)+horaExtra;
  }
  else
  {
    salarioTotal = cargaHoraria*salarioHora;
  }
  printf("\nO total a pagar para %s é: R$%.2f\n",nome,salarioTotal);

  return 0;
}
