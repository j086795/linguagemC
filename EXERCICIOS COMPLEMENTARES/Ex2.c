#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  float anos, n_cigarros, preco, gasto;
  printf("Digite a quantidade de anos que você fuma: ");
  scanf("%f",&anos);
  printf("Digite a quantidade de cigarros consumida por dia: ");
  scanf("%f",&n_cigarros);
  printf("Digite o preço de uma carteira de cigarros: ");
  scanf("%f", &preco);

  gasto = (((n_cigarros*365*anos)/20)*preco);
  gasto = ceil(gasto);

  printf("\nA quantidade de dinheiro gasto com cigarros foi R$%.2f\n",gasto);

  return 0;
}
