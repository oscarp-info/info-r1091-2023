#include <stdio.h>
#include <stdlib.h>  // atoi
#include <string.h>

int main() {
    char cad[100];

    char linea[] = "Oscar;Paniagua;48";  // parse
    char nombre[100] = {0};
    char apellido[100] = {0};
    char aux[100];  // edad en ascii
    int edad;

    // copiar "Oscar" en nombre
    int i = 0;
    int j = 0;
    while (linea[i] != ';') {
        nombre[i] = linea[i];
        i++;
    }
    // i en la posicion del ';'
    nombre[i] = 0;

    i++;

    while (linea[i] != ';') {
        apellido[j] = linea[i];
        i++;
        j++;
    }
    apellido[j] = 0;

    i++;
    j = 0;
    while (linea[i] != '\0') {
        aux[j] = linea[i];
        i++;
        j++;
    }
    aux[j] = 0;

    // test
    puts(nombre);
    puts(apellido);
    puts(aux);
    edad = atoi(aux);
    printf("%d\n", edad);

    return 0;
}
