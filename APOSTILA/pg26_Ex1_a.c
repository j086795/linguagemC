#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  float a, b, resultado;
  printf("Digite um n�mero: ");
  scanf("%f",&a);
  printf("Digite um n�mero: ");
  scanf("%f",&b);

  if(a>b)
  {
    resultado = (a-b);
    printf("\nA diferen�a �: %.2f\n",resultado);
  }
  else
    if (a<b)
    {
      resultado = (b-a);
      printf("\nA diferen�a �: %.2f\n",resultado);
    }
    else
    {
      printf("\nOs n�meros s�o iguais\n");
    }
  return 0;
}
