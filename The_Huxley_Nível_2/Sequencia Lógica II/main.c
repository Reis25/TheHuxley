#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i;

    scanf("%d", &x);
    scanf("%d", &y);

    for(i =1; i <=y; i++){

        printf("%i", i);


        if(i%x ==0){

        printf("\n");
        }
        else{
            printf(" ");
        }
    }
}
