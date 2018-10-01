#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL,"");
    int cod;
    float preco,precoNovo;
    char classe;

    printf("Digite a classe do produto: ");
    scanf("%c",&classe);
    printf("Digite o código do produto: ");
    scanf("%d",&cod);
    printf("Digite o preço de custo: ");
    scanf("%f",&preco);
    system("cls");

    switch (classe)
    {
    case 'A':
        precoNovo = (preco*1.05);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    case 'a':
        precoNovo = (preco*1.05);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    case 'B':
        precoNovo = (preco*1.10);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    case 'b':
        precoNovo = (preco*1.10);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    case 'C':
        precoNovo = (preco*1.15);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    case 'c':
        precoNovo = (preco*1.15);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    case 'D':
        precoNovo = (preco*1.18);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    case 'd':
        precoNovo = (preco*1.18);
        printf("Segue dados:\n\n");
        printf("Classe do produto: %c\n",classe);
        printf("Código do produto: %i\n",cod);
        printf("Preço anterior: R$ %.2f\n",preco);
        printf("Preço novo: R$ %.2f\n",precoNovo);
        break;

    default:
        printf("\nClasse inválida! Válido somente A, B, C e D.\n");
    }
    return 0;
}
