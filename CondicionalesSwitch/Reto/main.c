#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Piedra, papel o tijera \n");
    printf("Te encuentras con un amigo y deciden jugar piedra, papel o tijera. \n");
    printf("Estas con ellos y deciden numerarlos: \n");
    printf("a Piedra le atribuyen el numero 1. \n");
    printf("a Papel le asignan el numero 2. \n");
    printf("Y a tijera le colocan el numero 3. \n");
    printf("Es tu turno de adivinar y jugar con ellos. \n");
    int option;
    scanf("%i", &option);

    switch(option){

    case 1:
        printf("Elegiste piedra. \n");
        break;

    case 2:
        printf("Elegiste papel \n");
        break;

    case 3:
        printf("Elegiste tijera. \n");
        break;

    default:
        printf("Elegiste una opcion invalida");
        break;
    }
    return 0;
}
