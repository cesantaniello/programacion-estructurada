#include <stdio.h>
#include <stdlib.h>

char nombreAlumno[] = {""};
int nota;

void expediente(char nombreAlumno, int nota){

    printf("Ingrese nombre de alumno: \n");
    scanf("%s", nombreAlumno);
    printf("Ingrese nota de alumno: \n");
    scanf("%i", &nota);

    if (nota >= 7){
        printf("Alumno aprobado");
    } else {
        printf("Alumno reprobado");
    }
}

int main()
{
    printf("Nombres y notas de alumnos. \n");
    expediente();
    return 0;
}
