#include<stdio.h>
#include"ft_lib.h"

char *ft_striteri(char const *s, void (*f)(unsigned int, char*)){
	int i = 0;

	// Aplicar la funcion a cada char de la string
	while(i<s[i]){
		s[i] = f(i, s[i]);
		i++;
	}

	return s;
}

