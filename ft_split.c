/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:58:48 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 21:05:48 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		palabra_idx;
	int		palabras;
	char	**array;
	char	*new_string;

	i = 0;
	j = 0;
	start = 0;
	palabra_idx = 0;
	palabras = 1;
	**array;
	while (s[i])
	{
		if (s[i] == c)
			palabras++;
		i++;
	}
	array = malloc((palabras + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			new_string = malloc((i - start + 1) * sizeof(char));
			j = 0;
			while (j < i - start)
			{
				new_string[j] = s[start + j];
				j++;
			}
			array[palabra_idx] = new_string;
			palabra_idx++;
			start = i + 1;
		}
		i++;
	}
	new_string = malloc((i - start + 1) * sizeof(char));
	j = 0;
	while (j < i - start)
	{
		new_string[j] = s[start + j];
		j++;
	}
	array[palabra_idx] = new_string;
	palabra_idx++;
	start = i + 1;
	array[palabra_idx] = NULL;
	return (array);
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
