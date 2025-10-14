#include<stdlib.h>
#include<limits.h>
#include<stdint.h>
#include"libft.h"

void *ft_calloc(size_t nmemb, size_t size){
	void *p = malloc(nmemb*size);

	// Gestionar un posible overflow
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
  	return NULL;

	if(!p)
		return NULL;
	ft_bzero(p, nmemb * size);

	return p;
}

/*
int main(){
	
	void *p = calloc(23, sizeof(double));

	free(p);

	return 0;
}
*/
