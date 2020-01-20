#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bucle Do While\n");
    char answer = 'q';
    char value;

    do {
        printf("Ingresa una letra: ");
        scanf("%c", &value);
    }while(value != answer);

    printf("Coincide las letras %c = %c", value, answer);

    return 0;
}
