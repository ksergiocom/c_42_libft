/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:17:21 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 21:19:14 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		string_len;
	char	*new_string;

	i = 0;
	string_len = ft_strlen(s);
	new_string = malloc((string_len + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	while (i < string_len)
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	return (new_string);
}
