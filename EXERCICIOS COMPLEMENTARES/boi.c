#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"");
    int i, cod, codMenor, codMaior;
    float peso, pesoMenor, pesoMaior;

    for (i=0;i<=3;i++)
    {
    printf("Digite o número de identificação: \n");
    scanf("%d",&cod);
    system("cls");
    printf("Digite o peso do boi em Kilos: \n");
    scanf("%f",&peso);
    system("cls");


        if (i==0)
        {
            codMenor = cod;
            codMaior = cod;
            pesoMenor = peso;
            pesoMaior = peso;
        }
        else
            if (peso>pesoMaior)
            {
                pesoMaior = peso;
                codMaior = cod;
            }
            if (peso<pesoMenor)
            {
                pesoMenor = peso;
                codMenor = cod;
            }
    }
    printf("Segue dados:\n\n");
    printf("Número do boi com maior peso: %d\n",codMaior);
    printf("Peso do boi mais gordo: %.2f\n",pesoMaior);
    printf("Número do boi com menor peso: %d\n",codMenor);
    printf("Peso do boi mais magro: %.2f\n",pesoMenor);

    return 0;
}
