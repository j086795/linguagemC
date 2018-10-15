#include <stdio.h>
#include <math.h>

int main ()
{
    int i,n,f=1;
    /*requisita valor do usuário*/
    do
    {
    printf("Digite um valor inteiro nao negativo: ");
    scanf("%d",&n);
    }while(n<0);

    /*calcula fatorial*/

    while(i<=n)
    {
    f*=i;
    i++;
    }
    printf("Fatorial = %d\n",f);
    return 0;
}
