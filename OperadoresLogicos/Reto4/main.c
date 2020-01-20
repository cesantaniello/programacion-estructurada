#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1, var2;

    printf("Ingresa el primer numero: ");
    scanf("%i", &var1);

    printf("Ingresa el segundo numero: ");
    scanf("%i", &var2);

    if(var1 < var2)
        printf("El segundo numero es mayor");

    else if(var1 > var2)
    printf("El primer numero es mayor");

    else
    printf("Ambos numeros son iguales");
    return 0;
}
