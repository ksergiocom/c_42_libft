/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:54:48 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:55:47 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;
	char	*s;

	i = 0;
	s = dest;
	while (i < count)
	{
		s[i] = c;
		i++;
	}
	return (dest);
}

/*
int main()
{
	char str[] = "Hola que tal todo, estoy probando memset";
	printf("str original: %s\n", str);
	ft_memset(str, 'a', 10);
	printf("str memset: %s\n", str);
	
	return 0;
}
*/
