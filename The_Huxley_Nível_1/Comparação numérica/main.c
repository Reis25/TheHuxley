#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    if(a > b){
    printf("Digite um numero:\n");
    printf("Digite outro numero:\n");
    printf("Maior numero: %.1f\n", a);
    }
    else{
    printf("Digite um numero:\n");
    printf("Digite outro numero:\n");
    printf("Maior numero: %.1f\n", b);

    }
}
