#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"");
    int i, idade, maior, menor, soma = 0;
    float media;

    for (i=1;i<=10;i++)
    {
    printf("Digite a idade: \n");
    scanf("%d",&idade);
    system("cls");

    soma+=idade;
        if (i==1)
        {
            menor = idade;
            maior = idade;
        }
        else
            if (idade>maior)
            {
                maior = idade;
            }
            if (idade<menor)
            {
                menor = idade;
            }
    }
    printf("Maior idade: %d\n",maior);
    printf("Menor idade: %d\n",menor);
    printf("Média das idades: %.2f\n",media = soma/10);

    return 0;
}
