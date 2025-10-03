#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i = 0;
	char *new_s= malloc(len);

	if(!new_s)
		return NULL;

	while(i<len){
		new_s[i] = s[start+i];
		i++;
	}

	return new_s;
}

/*
int main()
{
	char *str = "supercalifragilisticoespialidoso";
	char *new_substr = ft_substr(str, 3, 100);

	printf("str: %s\n",str);
	printf("new_substr: %s\n",new_substr);

	return 0;
}
*/