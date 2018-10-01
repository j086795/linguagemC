#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int i, idade, maior, menor;

    for (i=1;i<=10;i++)
    {
        printf("Digite a idade: ");
        scanf("%d",idade);
        if (idade>maior)
        {
            maior=idade;
        }
        if (idade<menor)
        {
            menor=idade;
        }
    }
    printf("A maior idade é %d e a menor idade é %d",maior,menor);

    return 0;
}
