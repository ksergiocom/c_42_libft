#include<stdio.h>
#include"ft_lib.h"

int ft_toupper(int c)
{
	if(c>= 97 && c<= 122){
		return c-('a'-'A');
	}

	return c;
}

int main()
{
	printf("ft_tolower(%c): %c\n", 'A', ft_toupper('A'));
	printf("ft_tolower(%c): %c\n", 'z', ft_toupper('Z'));
	printf("ft_tolower(%c): %c\n", 'a', ft_toupper('a'));
	printf("ft_tolower(%c): %c\n", '!', ft_toupper('!'));
	printf("ft_tolower(%c): %c\n", '0', ft_toupper('0'));
	printf("ft_tolower(%c): %c\n", 245, ft_toupper(245));

	return 0;
}
