#include<stdio.h>

int ft_isalpha(int c)
{
	if(c>=65 && c <= 90) return 1;
	if(c>=97 && c <= 122) return 1;

	return 0;
}

/*
int main()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es alfa: %d\n", c1, ft_isalpha(c1));
	printf("%c es alfa: %d\n", c2, ft_isalpha(c2));
	printf("%c es alfa: %d\n", c3, ft_isalpha(c3));
	printf("%c es alfa: %d\n", c4, ft_isalpha(c4));
	
	return 0;
}
*/