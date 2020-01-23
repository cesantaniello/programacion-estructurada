#include <stdio.h>




int USDEUR(){
    float dolares, cambio;
    printf("\n¿Cuantos dolares quieres cambiar?: ");
    scanf("%f", &dolares);
    cambio = dolares * 0.91;
    printf("El cambio a euros es: %f",cambio);
}

int EURUSD(){
    float euros, cambio;
    printf("\n¿Cuantos euros quieres cambiar?: ");
    scanf("%f", &euros);
    cambio = euros * 1.1;
    printf("El cambio a dolares es: %f",cambio);
}

int main()
{
    int option;
    printf("Cambio de divisas.\n");
    printf("Selecciona el par de divisas para el cambio\n");
    printf("Presiona 1 para el par Dolar-Euro: \n");
    printf("Presiona 2 para el par Euro-Dolar: \n");
    scanf("%i", &option);

    switch(option){
    case 1:
        USDEUR();
        break;

    case 2:
        EURUSD();
        break;

    default:
        printf("Elegiste una opcion invalida");
        break;
    }
    return 0;
}
