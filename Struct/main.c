#include <stdio.h>
#include <stdlib.h>

struct personalData{
    char name[20];
    char lastName[20];
    int age;
};
int main()
{
    printf("Estructuras de datos\n");
    struct personalData person;
    printf("Leer datos. \n");
    printf("Leer nombre: \n");
    gets(person.name);

    printf("Leer apellido: \n");
    gets(person.lastName);

    printf("Leer edad: \n");
    scanf("%i", &person.age);

    printf("Imprimir datos: \n");
    printf("%s \n", person.name);
    printf("%s \n", person.lastName);
    printf("%i \n", person.age);
    return 0;
}
