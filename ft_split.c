/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:58:52 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:55:37 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_free(char **array)
{
	char	**start;

	start = array;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(start);
}

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	if (!*s)
		return (count);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	*ft_allocate_string_memory(size_t word_size, char **array)
{
	char	*string;

	string = malloc(word_size * sizeof(char));
	if (!string)
	{
		ft_free(array);
		return (NULL);
	}
	return (string);
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
		ft_skip_separator(&s, c);
		word_size = (word_len(s, c)) + 1;
		*array = ft_allocate_string_memory(word_size, array);
		if (!*array)
			return (NULL);
		ft_strlcpy(*array, s, word_size);
		array++;
		s = s + word_len(s, c);
		ft_skip_separator(&s, c);
	}
	*array = NULL;
	return (start);
}

