#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB, valorC;

    valorA = 5;
    valorB = valorC = 10;

    if ((valorA < valorB) && (valorB == valorC))
        printf("Se cumplieron las dos condiciones \n");
    else
        printf("No se cumplieron las condiciones \n");

    if ((valorA > valorB) || (valorB <= valorC))
        printf("Se cumplieron por lo menos una de las dos condiciones \n");
    else
        printf("No se cumplieron las condiciones \n");
    return 0;
}
