#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");

  float preco, avista, sem_juros, com_juros;
  printf("Digite o preço do produto: ");
  scanf("%f",&preco);

  avista = (preco*0.9);
  sem_juros = (preco/5);
  com_juros = (preco*1.2)/10;

  printf("\nSegue dados:\n");
  printf("\nPreço do produto: R$%.2f\n",preco);
  printf("\nValor no pagamento à vista com 10 por cento de desconto: R$%.2f\n",avista);
  printf("\nValor no pagamento à prazo sem juros em 5 vezes: R$%.2f\n",sem_juros);
  printf("\nValor no pagamento à prazo com juros de 20 por cento em 10 vezes: R$%.2f\n",com_juros);

  return 0;
}
