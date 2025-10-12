#include<stdio.h>
#include"ft_lib.h"

char *ft_strchr(const char *s, int c)
{

	int i = ft_strlen(s);
	
	while(i>=0){
		if(s[i] == c){
			return (char*) &s[i];
		}
		i--;
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
