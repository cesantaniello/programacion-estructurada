#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bucle while \n");
    printf("Introduce limite al bucle while: ");
    int limit;
    scanf("%i", &limit);
    int i = 1;

    while(i <= limit){
        printf("Numero: %i \n", i);
        i++;
    }
    return 0;
}
