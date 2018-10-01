#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  int n;
  printf("Digite um número inteiro: ");
  scanf("%d",&n);

  if ((n%2)==0)
  {
    printf("\nO número digitado é par\n");
  }
  else
  {
    printf("\nO número digitado é ímpar\n");
  }
  return 0;
}
