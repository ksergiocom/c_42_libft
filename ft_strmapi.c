#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
	int i = 0;
	int string_len = ft_strlen(s);

	// Reserva memoria para nueva string
	char *new_string = malloc((string_len+1) * sizeof(char));
	if(!new_string)
		return NULL;

	// Aplicar la funcion a cada char de la string
	while(i<string_len){
		new_string[i] = f(i, s[i]);
		i++;
	}

	return new_string;
}

