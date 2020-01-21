#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Matrices\n");

    int bidimensionalArray[4][4];

    bidimensionalArray[0][0] = 11;
    bidimensionalArray[0][1] = 12;
    bidimensionalArray[0][2] = 13;
    bidimensionalArray[0][3] = 14;

    bidimensionalArray[1][0] = 29;
    bidimensionalArray[1][1] = 28;
    bidimensionalArray[1][2] = 27;
    bidimensionalArray[1][3] = 26;

    bidimensionalArray[2][0] = 36;
    bidimensionalArray[2][1] = 35;
    bidimensionalArray[2][2] = 34;
    bidimensionalArray[2][3] = 33;

    bidimensionalArray[3][0] = 45;
    bidimensionalArray[3][1] = 46;
    bidimensionalArray[3][2] = 47;
    bidimensionalArray[3][3] = 48;

    printf("Valor en (0,0): %i \n", bidimensionalArray[0][0] );
    printf("Valor en (0,1): %i \n", bidimensionalArray[0][1] );
    printf("Valor en (0,2): %i \n", bidimensionalArray[0][2] );
    printf("Valor en (0,3): %i \n", bidimensionalArray[0][3] );

    return 0;
}
