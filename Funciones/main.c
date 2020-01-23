#include <stdio.h>
#include <stdlib.h>


int Addition(int a, int b){
    return a + b;
}

void main()
{
    printf("Funciones\n");

    int additionRes = Addition(3,4);

    printf("Resultado es: %i", additionRes);

}
