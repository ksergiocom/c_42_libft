#include<unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

/*
int main(){

	ft_putchar_fd('X', 1);

	return 0;
}
*/
