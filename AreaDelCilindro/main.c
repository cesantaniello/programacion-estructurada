#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float h;
    float PI = 3.1416;
    float cilindro;

    printf("Ingresa el valor del radio:\n");

    scanf("%f",&r);

    printf("Ingresa el valor de la altura:\n");

    scanf("%f",&h);

    cilindro = 2 * PI * r * h + 2 * PI * (r * r);

    printf("El area del cilindro es: %f \n",cilindro);

    return 0;
}
