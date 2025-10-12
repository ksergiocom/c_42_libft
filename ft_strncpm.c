#include<stdio.h>
#include<stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(*s1 && *s2 && n){
		if(*s1 != *s2){
			return *s1-*s2;
		}
		s1++;
		s2++;
	}

	return 0;
}

/*
int main()
{
	char *s1 = "hola";
	char *s2 = "hola";

	printf("%d\n", ft_strncmp(s1,s2, 10));

	return 0;
}
*/
