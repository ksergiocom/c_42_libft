#include<stdio.h>

int ft_isascii(int c)
{
	if(c>=0 && c <= 127) return 1;

	return 0;
}

/*
int main()
{
	char c1 = 'A';
	char c2 = '$';
	char c3 = '9';
	int c4 = 241;
	int c5 = 231;
	
	printf("%c es ascii: %d\n", c1, ft_isascii(c1));
	printf("%c es ascii: %d\n", c2, ft_isascii(c2));
	printf("%c es ascii: %d\n", c3, ft_isascii(c3));
	printf("%c es ascii: %d\n", c4, ft_isascii(c4));
	printf("%c es ascii: %d\n", c5, ft_isascii(c5));
	
	return 0;
}
*/