#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto 1: Variable que se suma a sí misma el doble de su valor. \n");
    int x = 10;
    x += 2*x;
    printf("El resultado es: %i", x);
    return 0;
}
