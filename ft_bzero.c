/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:21:04 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:23:18 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_bzero(void *dest, size_t count)
{
	size_t	i;
	char	*s;

	i = 0;
	*s = dest;
	while (i < count)
	{
		s[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char str[] = "Hola que tal todo, estoy probando";
	printf("str original: %s\n", str);
	ft_bzero(str, 10);
	printf("str bzero: %s\n", str);
	
	return 0;
}
*/
