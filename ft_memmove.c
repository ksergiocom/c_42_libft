#include<stdio.h>
#include<stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t count)
{
	size_t i = 0;
	char *d = dest;
	const char *s = src;

	char *tmp = malloc(count * sizeof(char));
	if(!tmp)
		return NULL;

	while(i<count){
		tmp[i] = s[i];
		i++;
	}

	i = 0;
	while(i<count){
		d[i] = tmp[i];
		i++;
	}

	free(tmp);

	return d;
}

/*
int main()
{
	char str[] = "Hola mundo!";
	char copied[20];

	ft_memmove(copied, str, 6);

	printf("%s\n", copied);

	return 0;	
}
*/
