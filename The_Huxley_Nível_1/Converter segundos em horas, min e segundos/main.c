#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos;
    int horas, minutos, seg;

    scanf("%i", &segundos);

    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    seg = segundos%60;

    printf("%i h %i m %i s\n", horas, minutos, seg);
}
