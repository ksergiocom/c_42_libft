#include<stdio.h>

void *ft_memset(void *dest, int c, size_t count)
{
	size_t i=0;
	/*
	El puntero original es de tipo void*, entonces no sabemos cuanto
	debemos desplazarnos en memoria.
	La memoria copia Byte a Byte, por lo cual podemos asumir que es 
	de tipo char ya que este tipo solo ocupa un único Byte y así el 
	compilador sabe cuanto debe desplazarse.
	*/
	char *s=dest;

	while(i<count){
		s[i]=c;
		i++;
	}

	return dest;
}

/*
int main()
{
	char str[] = "Hola que tal todo, estoy probando memset";
	printf("str original: %s\n", str);
	ft_memset(str, 'a', 10);
	printf("str memset: %s\n", str);
	
	return 0;
}
*/