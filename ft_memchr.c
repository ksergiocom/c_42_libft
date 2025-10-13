#include<stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i = 0;

	// Consideramos que char será del tamaño de 1Byte
	// por lo cual para iterar le tenemos que especificar
	// el tipo (char) al puntero.
	const unsigned char *p = s;
	
	
	while(p[i] && i<n){
		if(p[i] == c)
			return (void *)&p[i];
		i++;
	}

	return NULL;
}

/*
int main()
{
	char str[] = "Hola que tal estamos!?";
	char *ptr;

	ptr = ft_memchr(str, 'q', 8);

	if(ptr){
		printf("%s\n", ptr);
	}else{
		printf("No se ha encontrado\n");
	}

	return 0;
}
*/
