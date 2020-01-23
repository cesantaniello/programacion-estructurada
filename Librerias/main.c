#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias \n");

    float firstValue;
    float secondValue;
    float result;
    int option;

    printf("Soy una calculadora \n");

    printf("Introduce el primer valor: ");
    scanf("%f", &firstValue);

    printf("Introduce el segundo valor: ");
    scanf("%f", &secondValue);

    printf("Operacion que desea realizar: \n");
    printf("1. Suma \n");
    printf("2. Resta \n");
    printf("3. Multiplicacion \n");
    printf("4. Division \n");
    printf("Elige una opcion: ");

    scanf("%i",&option);

    switch(option){
        case 1:
            result = addition(firstValue, secondValue);
            break;

        case 2:
            result = substraction(firstValue, secondValue);
            break;

        case 3:
            result = multiplication(firstValue, secondValue);
            break;

        case 4:
            result = division(firstValue, secondValue);
            break;

        default:
            printf("Opcion no valida. Elige una opcion entre 1 y 4 \n");
    }

    printf("El resultado de la operacion es: %f", result);

    return 0;
}
