#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales \n");

    int lista[5];
    int resultado = 1;

    for (int i = 0; i < 5; i++){
        printf("Ingrese el valor %i para la lista: ", i+1);
        scanf("%i: ", &lista[i]);
        resultado *= lista[i];
    }

    printf("El resultado de la multiplicacion de la lista es: %i", resultado);
    return 0;
}
