#include<stdio.h>
#include"ft_lib.h"

char *ft_strchr(const char *s, int c)
{
	while(*s){
		if(*s == (char)c)
			return (char *)s;
		s++;
	}
	
	return NULL;
}

/*
int main()
{
	char *str = "Hola que tal estamos!?";
	
	printf("[H]: %s\n", ft_strchr(str, 'H'));
	printf("[a]: %s\n", ft_strchr(str, 'a'));
	printf("[e]: %s\n", ft_strchr(str, 'e'));
	printf("[z]: %s\n", ft_strchr(str, 'z'));
	printf("[0]: %s\n", ft_strchr(str, '0'));
	
	return 0;
}
*/
