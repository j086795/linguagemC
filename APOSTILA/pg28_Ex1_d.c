#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  int valorGasto,troco,qtdNota10=0;
  int qtdNota5=0,qtdNota1=0,resto;

  printf("\nDigite o valor gasto: ");
  scanf("%d",&valorGasto);
  troco = 50 - valorGasto;
  printf("\nTroco:R$ %d\n",troco);
  if (troco>=10)
  {
    resto = troco%10;
    qtdNota10 = (troco-resto)/10;
    troco = troco-qtdNota10*20;
  }
  if (troco>=5)
  {
    resto = troco%5;
    qtdNota5 = (troco-resto)/5;
    troco = troco-qtdNota5*5;
  }
  if (troco>=1)
  {
    qtdNota1=troco;
  }
  printf("\nNotas de R$10,00: %d",qtdNota10);
  printf("\nNotas de R$5,00: %d",qtdNota5);
  printf("\nNotas de R$1,00: %d\n",qtdNota1);
  return 0;
}
