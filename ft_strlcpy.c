#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t i = 0;
	while(i < dsize - 1 && src[i]){
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';

	return ft_strlen(src);
}

/*
int main()
{
	char s1[] = "Hola mundo!";
	char s2[20];
	int s2_len = 0;
	
	s2_len = ft_strlcpy(s2, s1, 15);

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s2_len:%d \n", s2_len);

	return 0;
}
*/
