#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit;
    float formula;

    printf("Ingresa la temperatura en grados fahrenheit:\n");

    scanf("%f",&fahrenheit);

    formula = (fahrenheit - 32) * 5/9;

    printf("La temperatura en grados celsius es: %f \n",formula);

    return 0;
}
