#include <stdio.h>
#include"libft.h"

char *ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i = 0;

	// Aplicar la funcion a cada char de la string
	while (i < s[i])
	{
		f(i, s);
		i++;
	}

	return s;
}
