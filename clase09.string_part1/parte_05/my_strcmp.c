/* version implementada con logica de arrays*/

int my_strcmp (const char *s1, const char *s2)
{
int i=0;
	while (s1[i]==s2[i] && s1[i])
		i++;
	
return s1[i]-s2[i];
}