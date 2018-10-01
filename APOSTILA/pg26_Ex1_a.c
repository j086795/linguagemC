#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  float a, b, resultado;
  printf("Digite um número: ");
  scanf("%f",&a);
  printf("Digite um número: ");
  scanf("%f",&b);

  if(a>b)
  {
    resultado = (a-b);
    printf("\nA diferença é: %.2f\n",resultado);
  }
  else
    if (a<b)
    {
      resultado = (b-a);
      printf("\nA diferença é: %.2f\n",resultado);
    }
    else
    {
      printf("\nOs números são iguais\n");
    }
  return 0;
}
