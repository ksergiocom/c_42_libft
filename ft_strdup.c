#include<stdio.h>
#include"ft_lib.h"

char *ft_strdup(const char *s)
{
	int len = ft_strlen(s);
	char *p = (char *) ft_calloc(sizeof(char), len + 1);
	if(!p)
		return NULL;
	ft_strlcpy(p, s, len);
	
	return p;	
}


int main(){

	char *s = "Hola mundo!";
	char *copia;

	copia = ft_strdup(s);

	printf("%s\n", copia);

	free(copia);

	return 0;
}
