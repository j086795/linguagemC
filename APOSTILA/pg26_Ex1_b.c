#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  int n;
  printf("Digite um n�mero inteiro: ");
  scanf("%d",&n);

  if ((n%2)==0)
  {
    printf("\nO n�mero digitado � par\n");
  }
  else
  {
    printf("\nO n�mero digitado � �mpar\n");
  }
  return 0;
}
