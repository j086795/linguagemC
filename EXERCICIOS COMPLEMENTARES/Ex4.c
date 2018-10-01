#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");

  float codigo, ncarros, total_vendas, salario_total;
  printf("Digite o código do vendedor: ");
  scanf("%f",&codigo);
  printf("Digite a quantidade de carros vendidos: ");
  scanf("%f",&ncarros);
  printf("Digite o valor total das vendas: ");
  scanf("%f",&total_vendas);

  salario_total = ((total_vendas*0.01)+(500*ncarros)+700);

  printf("\nSegue dados:\n");
  printf("\nCódigo do vendedor: %.0f\n",codigo);
  printf("\nSalário total: R$%.2f\n",salario_total);

  return 0;
}
