// gcc -Wall str_parte_04_02.c -o parser

#include <stdio.h>

int main()
{
    // nombre;apellido;genero,edad;peso
    char persona[100] = {0};

    // variables para almacenar los datos parseados
    char nombre[20] = "Juan";
    char apellido[30] = "Garcia Rodriguez";
    char genero = 'M';
    int edad = 18;
    float peso = 69.5;

    printf("nombre: %s\n", nombre);
    printf("apellido: %s\n", apellido);
    printf("genero: %c\n", genero);
    printf("edad: %d\n", edad);
    printf("peso: %f\n", peso);

    sprintf(persona, "%s;%s;%c;%d;%f", nombre, apellido, genero, edad, peso);

    puts(persona);

    return 0;
}