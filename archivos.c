// Hacer un programa en C que escriba o guarde los datos de estudiantes:
// Nombre [10] char
// apellido[10] char
// matricula[10] char
// Edad int.

#include <stdio.h>

int main()
{
    //variables
    FILE *archivo;
    char nombre[10]; 
    char apellido[10]; 
    char matricula[10];
    int edad;

    //pedir datos
    printf("\nNombre del estudiante: ");
    scanf("%s", nombre);
    printf("Apellido del estudiante: ");
    scanf("%s", apellido);
    printf("Matricula del estudiante: ");
    scanf("%s", matricula);
    printf("Edad del estudiante: ");
    scanf("%d", &edad);
    printf("\n");

    //guardar datos en archivo
    if(!(archivo = fopen("archivo.txt", "a"))) 
    {
        printf("Error al abrir el archivo");
        exit(0);
    }else{
        fprintf(archivo, "%10s   %10s   %10s   %2d\n", nombre, apellido, matricula, edad);
        fclose(archivo);

        printf("Datos guardados en archivo.txt");
    }

    return 0;
    
}