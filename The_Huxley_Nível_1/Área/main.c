#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("TRIANGULO: %.3lf\n",a*c*(0.5));
    printf("CIRCULO: %.3lf\n", 3.14159*c*c);
    printf("TRAPEZIO: %.3lf\n", (a + b)*c*(0.5));
    printf("QUADRADO: %.3lf\n", b*b);
    printf("RETANGULO: %.3lf\n",a*b);

}

//a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.

//b) a �rea do c�rculo de raio C. (pi = 3.14159)

//c) a �rea do trap�zio que tem A e B por bases e c por altura.

//d) a �rea do quadrado que tem lado B.

//e) a �rea do ret�ngulo que tem lados A e B.
