#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main ()
{
    setlocale(LC_ALL,"");
    float qlatas, custo, altura, raio, preco_lata, area, litros;
    printf("Digite a altura do tanque de combust�vel: ");
    scanf("%f",&altura);
    printf("Digite o raio do tanque de combust�vel: ");
    scanf("%f",&raio);
    printf("Digite o pre�o da lata de tinta: ");
    scanf("%f",&preco_lata);

    area = (((3.14)*(raio*raio)) + (2*3.14*raio*altura));
    litros = (area/3);
    qlatas = (litros/5);
    qlatas = ceil(qlatas);
    custo = (qlatas*preco_lata);

    printf("\n");

    printf("Segue dados:\n");
    printf("\n");
    printf("Altura do tanque: %.2f\n",altura);
    printf("Raio do tanque: %.2f\n",raio);
    printf("Pre�o da lata de tinta: %.2f\n",preco_lata);
    printf("�rea de cobertura: %.2f\n",area);
    printf("Quantidade de litros necess�rios: %.2f\n",litros);
    printf("Quantidade de latas necess�rias: %.2f\n",qlatas);
    printf("Custo para pintar o tanque: %.2f\n",custo);

}

