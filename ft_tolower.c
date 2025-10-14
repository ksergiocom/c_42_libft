#include<stdio.h>
#include"libft.h"

int ft_tolower(int c)
{
	if(c>= 65 && c<= 90){
		return c+('a'-'A');
	}

	return c;
}

/*
int main()
{
	printf("ft_tolower(%c): %c\n", 'A', ft_tolower('A'));
	printf("ft_tolower(%c): %c\n", 'z', ft_tolower('Z'));
	printf("ft_tolower(%c): %c\n", 'a', ft_tolower('a'));
	printf("ft_tolower(%c): %c\n", '!', ft_tolower('!'));
	printf("ft_tolower(%c): %c\n", '0', ft_tolower('0'));
	printf("ft_tolower(%c): %c\n", 245, ft_tolower(245));
	
	return 0;
}
*/