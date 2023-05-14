/*
 * Escribir las funciones necesarias para implementar una calculadora
 * suma +
 * resta -
 * multiplicacion *
 * division /
 */
#include <stdio.h>

// prototipos de funciones
float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float division(float, float);
void operaciones(float, float, float *, float *, float *, float *);

int main(void)
{

    float rs, rr, rm, rd;
    float a, b;
    a = 20.0;
    b = 10.0;
    operaciones(a, b, &rs, &rr, &rm, &rd);
    printf("resultados: %f %f %f %f\n", rs, rr, rm, rd);

    return 0;
}

float suma(float a, float b)
{
    return (a + b);
}

float resta(float a, float b)
{
    return (a - b);
}

float multiplicacion(float a, float b)
{
    return (a * b);
}

float division(float a, float b)
{

    float resultado;

    if (b == 0)
    {
        resultado = 0;
    }

    else
    {
        resultado = a / b;
    }

    return resultado;
}

void operaciones(float x, float y, float *rs, float *rr, float *rm, float *rd)
{
    *rs = suma(x, y);
    *rr = resta(x, y);
    *rm = multiplicacion(x, y);
    *rd = division(x, y);
}
