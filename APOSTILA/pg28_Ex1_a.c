#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  int x,y,z;
  setlocale(LC_ALL,"");
  printf("Digite tr�s n�meros inteiros: ");
  scanf("%d %d %d",&x,&y,&z);

  if ((x<y+z) && (y<x+z) && (z<x+y))
  {
    printf("Os n�meros digitados formam um tri�ngulo!\n");
  }
  else
  {
    printf("Os n�meros n�o formam um tri�ngulo!\n");
    scanf("%d");
  }
    if ((x==y) && (y==z))
    {
      printf("\n\nOs n�meros digitados formam um tri�ngulo equil�tero!\n");
    }
    else
      if ((x==y) || (y==z) || (x==z))
    {
      printf("\n\nO n�meros digitados formam um tri�ngulo isosceles!\n");
    }
    else
      {
        printf("\n\nOs n�meros digitados formam um tri�ngulo escaleno!\n");
      }
   return 0;
}
