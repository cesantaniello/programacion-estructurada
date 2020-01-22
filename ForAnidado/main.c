#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("For anidado \n");
    int integerArray[4][5];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            integerArray[i][j] = i + j;
            printf("El resultado de la suma de las coordenadas (%i, %i) es: %i \n", i, j, integerArray[i][j]);
        }
    }
    return 0;
}
