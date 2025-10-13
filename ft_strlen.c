#include <stddef.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	int i = 0;
	while(s[i]){
		i++;
	}

	return i;
}


/*
int main()
{
	const char *str = "Hola";
	
	printf("ft_strlen de %s: %ld\n", str, ft_strlen(str));
	
	return 0;
}
*/
