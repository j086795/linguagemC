#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");

  float custo_total, custo_fabrica, distribuidor, imposto;
  printf("Digite o custo de f�brica do ve�culo: ");
  scanf("%f",&custo_fabrica);

  distribuidor = (custo_fabrica*0.12);
  imposto = (custo_fabrica*0.45);
  custo_total = (custo_fabrica+distribuidor+imposto);

  printf("Segue dados:\n");
  printf("\nCusto de f�brica do ve�culo: R$%.2f\n",custo_fabrica);
  printf("Porcentagem do distribuidor: R$%.2f\n",distribuidor);
  printf("Imposto: R$%.2f\n",imposto);
  printf("\nO custo total ao consumidor � de R$%.2f\n",custo_total);

  return 0;
}
