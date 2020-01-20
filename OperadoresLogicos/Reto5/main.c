#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, nota_minima, nota_sobresaliente;
    nota_minima = 60;
    nota_sobresaliente = 90;

    printf("Ingresa la nota del alumno: ");
    scanf("%i", &nota);

    if(nota < nota_minima)
        printf("Estas reprobado.");

    else if(nota >= nota_minima)
    printf("Estas aprobado. \n");

    if (nota >= nota_sobresaliente)
    printf(":)");
    return 0;
}
