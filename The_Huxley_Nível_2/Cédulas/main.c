#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    scanf("%d", &valor);

    notas100 = (valor/100);
    notas50  = (valor%100)/50;
    notas20  = (valor%50)/20;
    notas10  = ((valor%50)%20)/10;
    notas5   = (valor%10)/5;
    notas2   = (valor%5)/2;
    notas1   = ((valor%5)%2);

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n",  notas50);
    printf("%d nota(s) de R$ 20,00\n",  notas20);
    printf("%d nota(s) de R$ 10,00\n",  notas10);
    printf("%d nota(s) de R$ 5,00\n",   notas5);
    printf("%d nota(s) de R$ 2,00\n",   notas2);
    printf("%d nota(s) de R$ 1,00\n",   notas1);
}
