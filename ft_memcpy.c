#include <stdio.h>
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t i = 0;

	/*
	El puntero original es de tipo void*, entonces no sabemos cuanto
	debemos desplazarnos en memoria.
	La memoria copia Byte a Byte, por lo cual podemos asumir que es
	de tipo char ya que este tipo solo ocupa un único Byte y así el
	compilador sabe cuanto debe desplazarse.
	*/
	char *s = (char *)src;
	char *d = (char *)dest;

	while (i < count)
	{
		d[i] = s[i];
		i++;
	}

	return dest;
}

int main()
{
	char *string = "Hola que tal";
	char dest_string[20];

	ft_memcpy(dest_string, string, 5);

	printf("%s\n", dest_string);

	return 0;
}