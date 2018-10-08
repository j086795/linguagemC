#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"");
    int i,n,f = 1;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f*=i;
    }
    printf("Fatorial = %d \n",f);
    return 0;
}
