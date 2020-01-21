#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Suma de elementos de matrices\n");

    int bidimensionalArray[4][3];
    int total1, total2, total3 = 0;

    bidimensionalArray[0][0] = 1;
    bidimensionalArray[0][1] = 1;
    bidimensionalArray[0][2] = 1;
    bidimensionalArray[0][3] = 1;
    total1 = bidimensionalArray[0][0] + bidimensionalArray[0][1] + bidimensionalArray[0][2] + bidimensionalArray[0][3];

    bidimensionalArray[1][0] = 1;
    bidimensionalArray[1][1] = 2;
    bidimensionalArray[1][2] = 3;
    bidimensionalArray[1][3] = 4;
    total2 = bidimensionalArray[1][0] + bidimensionalArray[1][1] + bidimensionalArray[1][2] + bidimensionalArray[1][3];

    bidimensionalArray[2][0] = 5;
    bidimensionalArray[2][1] = 6;
    bidimensionalArray[2][2] = 7;
    bidimensionalArray[2][3] = 8;
    total3 = bidimensionalArray[2][0] + bidimensionalArray[2][1] + bidimensionalArray[2][2] + bidimensionalArray[2][3];

    printf("La suma total de la fila 1: %i \n", total1 );
    printf("La suma total de la fila 2: %i \n", total2 );
    printf("La suma total de la fila 3: %i \n", total3 );

    return 0;
}
