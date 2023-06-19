#include <stdio.h>
#include <string.h>

int main()
{

    char my_array_1[6] = "array";
    char my_array_2[] = "array"; //  el compilador completa el tamaño incluyendoel \0
    char my_array_3[] = {'a', 'r', 'r', 'a', 'y', 0};
    char *my_ptr = "array";        // string literal
    char my_array_4[10] = "array"; // se completan con 0 los espacios que sobran
    char my_array_5[3] = "array";  // se trunca, con lo cual no tiene el 0 final, con lo cual no es un str (warning gcc)

    char my_arr_str[][5] = {"New", "Used"}; // array de string
    char *my_ptr_arr[2] = {"New", "Used"};  // array de punteros a string

    printf("%ld\n", sizeof(my_arr_str));   // 10 (2 str de 5 de 1 byte)
    printf("%ld\n", sizeof(my_ptr_arr));   // 16 (2 pointer de 8 bytes)
    printf("%ld\n", sizeof(*my_ptr_arr));  // 8 ( 1 pointer)
    printf("%ld\n", sizeof(**my_ptr_arr)); // 8 ( 1 char)

    // solo para verificar, porque aun no vimos strlen ni arrays de str
    printf("===\n");
    printf("%ld\n", strlen(*my_ptr_arr));
    printf("%ld\n", strlen(*(my_ptr_arr + 1)));

    return 0;
}