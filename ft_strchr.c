/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:06:09 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/15 14:24:00 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
int main()
{
	char *str = "Hola que tal estamos!?";
	
	printf("[H]: %s\n", ft_strchr(str, 'H'));
	printf("[a]: %s\n", ft_strchr(str, 'a'));
	printf("[e]: %s\n", ft_strchr(str, 'e'));
	printf("[z]: %s\n", ft_strchr(str, 'z'));
	printf("[0]: %s\n", ft_strchr(str, '0'));
	
	return 0;
}
*/
