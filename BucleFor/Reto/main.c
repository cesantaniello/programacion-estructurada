#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Secuencia Fibonacci \n");
    int sucesion, a, b, c;
    a = 1;
    b = c = 0;

    printf("Ingresar numero de la sucesion: ");
    scanf("%i", &sucesion);

    for(int i = 0; i < sucesion; i++){
        printf("%i, ", a);
        c = a + b;
        b = a;
        a = c;
    }
    return 0;
}
