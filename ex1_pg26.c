#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  float a, b;
  printf("Digite um n�mero: ");
  scanf("%f",&a);
  printf("Digite um n�mero: ");
  scanf("%f",&b);

  if(a>b)
  {
    result = (a-b);
  }
  return 0;
}
