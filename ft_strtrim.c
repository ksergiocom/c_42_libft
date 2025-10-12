#include<stdio.h>
#include<stdlib.h>
#include"ft_lib.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i = 0;
	int start = 0;
	int end = ft_strlen(s1) - 1;
	int new_length = 0;
	char *trimmed;

	while(s1[start] && ft_strchr(set, s1[start])){
		start++;
	}

	while(end > start && ft_strchr(set, s1[end])){
		end--;
	}

	new_length = end - start + 1;

	trimmed = malloc(new_length * sizeof(char));

	if(!trimmed)
		return NULL;

	while(start+i<=end){
		trimmed[i] = s1[start+i];
		i++;
	}

	trimmed[start+i] = '\0';

	return trimmed;
}

int main(){

	char *original = "azaabbbazacczaaaaa";
	char *trimmed = ft_strtrim(original, "az");

	printf("Original: %s\n", original);
	printf("Trimmed: %s\n", trimmed);

	return 0;
}
