#include<stdio.h>

int ft_isdigit(int c)
{
	if(c>=48 && c <= 57) return 1;

	return 0;
}

/*
int main()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es digit: %d\n", c1, ft_isdigit(c1));
	printf("%c es digit: %d\n", c2, ft_isdigit(c2));
	printf("%c es digit: %d\n", c3, ft_isdigit(c3));
	printf("%c es digit: %d\n", c4, ft_isdigit(c4));
	
	return 0;
}
*/