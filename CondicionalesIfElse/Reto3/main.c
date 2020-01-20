#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adivina un numero entre el 1 y el 10. \n");

    int valA, valB;
    valA = 5;
    valB = 5;

    if (valA == valB){
        printf("Adivinaste!");
    }
    else{
        printf("Ese no es, perdiste!");
    }

    return 0;
}
