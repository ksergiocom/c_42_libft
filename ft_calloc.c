#include<stdlib.h>
#include"ft_lib.h"

void *ft_calloc(size_t nmemb, size_t size){
	void *p = malloc(nmemb*size);
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
