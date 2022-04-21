// Hacer un programa en C que escriba o guarde los datos de estudiantes:
// Nombre [10] char
// apellido[10] char
// matricula[10] char
// Edad int.

#include <stdio.h>

int main()
{
    FILE *archivo;

    archivo = fopen("archivo.txt", "a");

    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo");
        return 1;
    }

    char nombre[10];
    char apellido[10];
    char matricula[10];
    int edad;

    printf("\nNombre del estudiante: ");
    scanf("%s", nombre);
    printf("Apellido del estudiante: ");
    scanf("%s", apellido);
    printf("Matricula del estudiante: ");
    scanf("%s", matricula);
    printf("Edad del estudiante: ");
    scanf("%d", &edad);
    printf("\n");

    fprintf(archivo, "%s %s %s %d\n", nombre, apellido, matricula, edad);

    fclose(archivo);

    return 0;
    
}