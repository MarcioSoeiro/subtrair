#include <stdio.h>

int main(void)
{
    int v1;
    int v2;
    int subtrair;

    printf("digite o valor 1: \n");
    scanf("%i", &v1);

    printf("digite o valor 2: \n");
    scanf("%i",&v2);

    subtrair = v1 - v2;

    printf("Resultado: %i - %i = %i \n", v1, v2, subtrair);


}
