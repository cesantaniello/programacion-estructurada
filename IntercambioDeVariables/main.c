#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerA;
    int integerB;
    int aux

    printf("Ingresa el valor del entero A \n");

    scanf("%i", &integerA);

    printf("Ingresa el valor del entero B \n");

    scanf("%i", &integerB);

    aux = integerA;
    integerB = integerA;
    integerB = aux;

    printf("El entero A es: %i \n", integerA);
    printf("El entero B es: %i", integerB);

    return 0;
}
