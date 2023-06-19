// gcc -Wall str_parte_02_01.c -o str

#include <stdio.h>

int main()
{

    // el compilar automaticamente le agrega el \0
    char *s = "Hello World";

    // imprime en pantalla el string(completo)
    printf("%s\n", s);

    // imprime los primeros 5 caracteres del string
    printf("%.5s\n", s);

    // m.n "n" es la cantidad de caracteres y "m" la longitud del campo
    // alinea desde la derecha
    printf("%7.5s\n", s);

    // puts imprime sin formato y agrega automaticamente in \n (newline)
    puts(s);

    return 0;
}