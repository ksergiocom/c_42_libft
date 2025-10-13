#include<stdio.h>
#include"ft_lib.h"

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}


int main()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es alfanum: %d\n", c1, ft_isalnum(c1));
	printf("%c es alfanum: %d\n", c2, ft_isalnum(c2));
	printf("%c es alfanum: %d\n", c3, ft_isalnum(c3));
	printf("%c es alfanum: %d\n", c4, ft_isalnum(c4));
	
	return 0;
}

