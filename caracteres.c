#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char c;
    printf ("\n\nDigite um numero inteiro: ");
    scanf ("%d",&num);
    fflush (stdin);
    printf ("\n\nDigite um numero caractere: ");
    scanf ("%c",&c);
    printf ("\nO inteiro digitado foi %d",num);
    printf ("\nO caracter digitado foi %c",c);
    return 0;

}
