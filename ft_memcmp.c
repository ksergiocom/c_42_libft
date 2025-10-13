#include<stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n){
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;
	size_t i = 0;

	while(i<n){

		if(p1[i] != p2[i])
			return p1[i] - p2[i];

		i++;
	}

	return 0;

}

/*
int main(){
	printf("hola - hola [Res: %d]\n", ft_memcmp("hola","hola",5));
	printf("hola - hola [Res: %d]\n", ft_memcmp("hola","hola",2));
	printf("Hola - hola [Res: %d]\n", ft_memcmp("Hola","hola",10));
	printf("Hola - Hola que tal [Res: %d]\n", ft_memcmp("hola","Hola que tal",20));

	return 0;
}
*/
