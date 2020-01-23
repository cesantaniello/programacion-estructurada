#include <stdio.h>
#include <stdlib.h>

char publicText[] = {"\nTexto en una variable global"};

void check(){
    printf("\n Imprimir desde la funcion: check");

    printf("\nVariable global: ");
    printf("\n%s", publicText);

    printf("\nVariable local: \n");
    //printf("%s", privateText);

}

int main()
{
    printf("\nVariables Globales\n");

    char privateText[] = {"\nTexto en una variable local \n"};

    printf("\nVariable global: ");
    printf("\n%s", publicText);

    printf("\nVariable local: \n");
    printf("\n%s", privateText);

    check();

    return 0;
}
