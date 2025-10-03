#include<stdio.h>
#include<ctype.h>

int ft_isprint(int c)
{
	if(c>=32 && c <= 126)
		return 1;

	return 0;
}

int main()
{
	int i = 0;
	while(i<250){
		printf("%d -> %c -> isprint: %d\n",i, i , isprint(i));
		i++;
	}
}