/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:12:09 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/24 20:24:52 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

int	count_word_length(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char	**free_all(char **array)
{
	char	**start;

	start = array;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(start);
	return (NULL);
}

char const	*skip_separator(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		word_len;
	char	**array;
	char	**start;

	count = count_words(s, c);
	array = ft_calloc(count + 1, sizeof(char *));
	start = array;
	if (!array)
		return (free_all(start));
	while (*s)
	{
		s = skip_separator(s, c);
		if (!*s)
			break ;
		word_len = count_word_length(s, c);
		*array = ft_calloc((word_len + 1), sizeof(char));
		if (!*array)
			return (free_all(start));
		ft_strlcpy(*array, s, word_len + 1);
		s = s + word_len;
		array++;
	}
	*array = NULL;
	return (start);
}
