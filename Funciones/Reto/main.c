#include <stdio.h>
#include <math.h>


int potencia(){
    int base, exponente, resultado = 0;

    printf("Dame la base: \n");
    scanf("%i", &base);

    printf("Dame el exponente: \n");
    scanf("%i", &exponente);

    resultado = pow(base, exponente);
    printf("Resultado es: %i", resultado);
}

int main()
{
    printf("Potencia\n");

    potencia();
    return 0;
}
