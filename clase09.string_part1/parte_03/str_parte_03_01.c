// gcc -Wall str_parte_03_01.c -o str

#include <stdio.h>

int main()
{

    char s[10];

    // printf("Ingrese un string:");
    // scanf("%s", s); // no hace falta el operador &, 's' ya es una dirección
    // es tratado como puntero al primer elemento (decay)
    // scanf lee hasta un white space(espacio, tab, etc)
    // En ASCII, whitespace son: space (' '), tab ('\t'), carriage return ('\r'), newline ('\n'),
    //	vertical tab ('\v') y formfeed ('\f').
    // probar con:
    // hello
    // hello world
    // printf("%s\n", s);

    printf("Ingrese un string:");
    // lee la linea completa
    gets(s);
    // ojo! si ingreso un string mayor a "10", crash
    // tanto scanf como gets, no controlan cuando se pasa del tamaño del array

    // solucion con scanf
    // scanf("%9s", s)

    // gets es unsafe, utilizar fgets
    fgets(s, 9, stdin);

    /*
     * stdin
     * https://www.tutorialspoint.com/cprogramming/c_input_output.htm
     *  Integer value   Name
     *      0        Standard input (stdin)         teclado
     *      1        Standard output (stdout)       pantalla
     *      2        Standard error (stderr)        pantalla
     */

    return 0;
}