#include<stdio.h>
#include"libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i = 0;
	size_t j = 0;

	if(ft_strlen(little) == 0){
		return (char*)big;
	}

	while(big[i] != '\0' && i < len){
		j = 0;
		while ( little[j] && big[i + j] && big[i + j] == little[j] && i+j < len){
			j++;
		}	

		if(little[j] == '\0'){
			return (char *)&big[i];
		}

		i++;
	}

	return NULL;
}


/*
int main(){
	
	char *big = "Hola que tal!?";
	char *little = "que";
	char *res_ptr = ft_strnstr(big, little, 7);	
	
	if(!res_ptr){
		printf("No se encontró\n");
	}else{
		printf("%s\n", res_ptr);
	}

	return 0;
}
*/
