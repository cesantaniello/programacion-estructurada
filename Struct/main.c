#include <stdio.h>
#include <stdlib.h>

struct personalData{
    char name[20];
    char lastName[20];
    int age;
};
int main()
{
    printf("Archivos - Guardar en un archivo \n");
    struct personalData person;

    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat", "rb");

    if (archivo != NULL){
/*  Modulo para crear y escribir un archivo nuevo
       fflush(stdin);

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

        fwrite(&person, sizeof(person), 1, archivo);
*/
        fread(&person, sizeof(person), 1, archivo);
        printf("Imprimir datos \n");
        printf("Nombre: %s \n", person.name);
        printf("Apellido: %s \n", person.lastName);
        printf("Edad: %i \n", person.age);
        fclose(archivo);
    }else{
        printf("No se ha podido crear el archivo");
    }

    return 0;
}
