#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Imprime los 100 primeros numeros naturales usando un Do While\n");
    int end = 100;
    int start = 0;
    do {
        start++;
        printf("%i \n", start);
    }while(start != end);

    return 0;
}
