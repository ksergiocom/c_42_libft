/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:25:14 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 21:26:21 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
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
