#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  char nome[50];
  int a, b, c;
  printf ("Digite um nome: ");
  gets (nome);
  printf("\nO nome digitado foi %s",nome);

  printf("\nDigite três valores inteiros: ");
  scanf("%d %d %d",&a,&b,&c);

  if((a==b) && (a==c))
  {
    printf("\n\nOs números são iguais\n");
  }
  else
  {
    printf("\n\nOs valores são diferentes\n");
  }
  return 0;
}

