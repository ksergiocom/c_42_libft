/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:58:52 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/15 01:09:24 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

int	count_words(char const *s, char c)
{
	int	count;

	if (!*s)
		return (0);
	count = 1;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		word_size;
	int		words_count;
	char	**array;
	char	**start;

	words_count = count_words(s, c) + 1;
	array = malloc(words_count * sizeof(char *));
	start = array;
	if (!array)
		return (NULL);
	while (*s)
	{
		word_size = (word_len(s, c)) + 1;
		*array = malloc(word_size * sizeof(char));
		if (!*array)
			return (NULL);
		ft_strlcpy(*array, s, word_size);
		array++;
		s = s + word_size;
	}
	*array = NULL;
	return (start);
}

/*
int main(void)
{
	char *s = "Hola,que,tal!?";
	char **a = ft_split(s, ',');
	while(*a){
		printf("%s\n", *a);
		a++;
	}
	return (0);
}
*/
