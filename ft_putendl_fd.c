#include<unistd.h>
#include"libft.h"

void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}


/*
int main(){

	ft_putendl_fd("hola mundo!", 1);	
			
	return 0;
}
*/
