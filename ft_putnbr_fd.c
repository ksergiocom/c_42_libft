#include<unistd.h>

void ft_putnbr_fd(int n, int fd){
	write(fd, &n, sizeof(n)); 
}

int main(){
	
	ft_putnbr_fd(123, 1);

	return 0;
}
