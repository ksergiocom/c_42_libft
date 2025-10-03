#include<stdio.h>

void *ft_bzero(void *dest, size_t count)
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
		s[i]='\0';
		i++;
	}

	return dest;
}

/*
int main()
{
	char str[] = "Hola que tal todo, estoy probando";
	printf("str original: %s\n", str);
	ft_bzero(str, 10);
	printf("str bzero: %s\n", str);
	
	return 0;
}
*/