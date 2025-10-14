/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:48:23 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:50:17 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
int main(){
	printf("hola - hola [Res: %d]\n", ft_memcmp("hola","hola",5));
	printf("hola - hola [Res: %d]\n", ft_memcmp("hola","hola",2));
	printf("Hola - hola [Res: %d]\n", ft_memcmp("Hola","hola",10));
	printf("Hola - Hola que tal [Res: %d]\n", 
		ft_memcmp("hola","Hola que tal",20));

	return 0;
}
*/
