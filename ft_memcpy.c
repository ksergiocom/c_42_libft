#include<stddef.h>
#include"ft_lib.h"

void *ft_memcpy(void *dest, const void *src, size_t count)
{
	int i = 0;

	/*
	El puntero original es de tipo void*, entonces no sabemos cuanto
	debemos desplazarnos en memoria.
	La memoria copia Byte a Byte, por lo cual podemos asumir que es 
	de tipo char ya que este tipo solo ocupa un único Byte y así el 
	compilador sabe cuanto debe desplazarse.
	*/
	char *s = src;
	char *d = dest;

	while(i<ft_strlen(dest)){
		s[i] = d[i];
		i++;
	}

	return dest;
}

int main()
{
	return 0;
}