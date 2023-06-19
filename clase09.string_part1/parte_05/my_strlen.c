/* version implementada con logica de arrays*/

// se podría fijar un límite al valor de i o verificar si en algun momento se vuelve negativo.
int my_strlen (const char *s1)
{
int i=0;
	while (s1[i]) // && i>=0
		i++;
	
return i;
}