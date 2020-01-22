#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iteradores \n");

    int arraySize;
    int higher = 0;

    printf("Introduce el tamano del arreglo: ");
    scanf("%i: ", &arraySize);

    int array[arraySize];

    for (int i = 1; i <= arraySize; i++){
        printf("Introduce el numero %i: ", i);
        scanf("%i: ", &array[i]);
        if (higher < array[i]){
            higher = array[i];
        }
    }
    printf("El numero mayor es: %i", higher);
    return 0;
}
