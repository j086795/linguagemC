#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  int x,y,z;
  setlocale(LC_ALL,"");
  printf("Digite três números inteiros: ");
  scanf("%d %d %d",&x,&y,&z);

  if ((x<y+z) && (y<x+z) && (z<x+y))
  {
    printf("Os números digitados formam um triângulo!\n");
  }
  else
  {
    printf("Os números não formam um triângulo!\n");
    scanf("%d");
  }
    if ((x==y) && (y==z))
    {
      printf("\n\nOs números digitados formam um triângulo equilátero!\n");
    }
    else
      if ((x==y) || (y==z) || (x==z))
    {
      printf("\n\nO números digitados formam um triângulo isosceles!\n");
    }
    else
      {
        printf("\n\nOs números digitados formam um triângulo escaleno!\n");
      }
   return 0;
}
