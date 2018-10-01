#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL,"");
    float raio,area,volume;
    printf("Digite o valor do raio:\n");
    scanf("%f", &raio);
    area = ((4*3.14)*(raio*raio));
    volume = ((4)*(3.14)*(raio*raio*raio)/3);
    printf("A esfera possui área %.2f e volume %.2f", area,volume);
    return 0;
}
