#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()

{
    setlocale(LC_ALL, "");
    int n1, n2, n3, n4, n5;
    int positivo = 0, negativo = 0;

printf("Digite 5 números inteiros: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    if(n1 < 0)
        negativo++;
    else
        positivo++;
    if(n2 < 0)
        negativo++;
    else
        positivo++;
    if(n3 < 0)
        negativo++;
    else
     positivo++;
    if(n4 < 0)
        negativo++;
    else
     positivo++;

    if(n5 < 0)
    negativo++;
    else
    positivo++;

    printf("Você digitou %d números negativos e %d positivos.", negativo, positivo);
    return 0;
}
