#include<stdio.h>
#include<stdlib.h>
#include"libft.h"


char **ft_split(char const *s, char c)
{
	int i = 0;
	int j = 0;
	int start = 0;
	int palabraIdx = 0;
	int palabras = 1;
	char **array;

	// Contar palabras
	while(s[i]){
		if(s[i] == c)
			palabras++;
		i++;
	}

	// Alojar espacio para array
	array = malloc((palabras+1) * sizeof(char *));
	if(!array)
		return NULL;

	// Recorrer string y reservar espacio para cada palabra
	i = 0;
	while(s[i]){
		if(s[i] == c){
			// Reservar memoria para esta palabra
			char *new_string = malloc((i - start + 1) * sizeof(char));
			j=0;
			while(j<i-start){
				new_string[j] = s[start+j]; 
				j++;
			}
			array[palabraIdx] = new_string;
			palabraIdx++;

			// Donde empieza la siguiente palabra
			start = i+1;

		}
		i++;
	}

	// Agregar la ultima palabra sin delimitador
	char *new_string = malloc((i - start + 1) * sizeof(char));
	j=0;
	while(j<i-start){
		new_string[j] = s[start+j]; 
		j++;
	}
	array[palabraIdx] = new_string;
	palabraIdx++;

	// Donde empieza la siguiente palabra
	start = i+1;
					
	array[palabraIdx] = NULL;

	return array;
}


/*
int main(){
	char *string = "Holaquetal?";

	char **a = ft_split(string, ',');

	while(*a){
		printf("%s\n", *a);
		a++;
	}


	return 0;
}
*/
