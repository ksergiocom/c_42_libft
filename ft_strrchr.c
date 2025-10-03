#include<stdio.h>
#include"ft_lib.h"

char *ft_strrchr(const char *s, int c)
{
	/*
	 1. Saco la longitude de la string
	 2. Mando el puntero hasta el final
	 3. Empiezo a iterar desde atrás hasta el inicio
	 4.1. Sí matcheo; ahi devuelvo el puntero.
	 4.2. Sí llego al principio (decremento len)
	 	entonces es que no he encontrado nada.
	*/

	const int len = ft_strlen(s);

	// Mando el puntero hasta el final
	int i = len;
	while(i>0){
		i--;
		s++;
	}

	// Reseteo el contador de letras que voy a iterar 
	//para saber que he llegado al principio
	i = len; 

	// Empiezo a iterar en orden inverso
	while(i>0){
		if(*s == (char)c)
			return (char *)s;
		i--;
		s--;
	}
	
	// No he encontrado nada
	return NULL;
}

/*
int main()
{
	char *str = "Hola que tal estamos!?";

	printf("[H]: %s\n", ft_strrchr(str, 'H'));
	printf("[a]: %s\n", ft_strrchr(str, 'a'));
	printf("[e]: %s\n", ft_strrchr(str, 'e'));
	printf("[z]: %s\n", ft_strrchr(str, 'z'));
	printf("[0]: %s\n", ft_strrchr(str, '0'));

	return 0;
}
*/