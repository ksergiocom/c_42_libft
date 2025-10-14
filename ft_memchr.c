/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:37:37 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:46:44 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*p;

	i = 0;
	p = s;
	while (p[i] && i < n)
	{
		if (p[i] == c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char str[] = "Hola que tal estamos!?";
	char *ptr;

	ptr = ft_memchr(str, 'q', 8);

	if(ptr){
		printf("%s\n", ptr);
	}else{
		printf("No se ha encontrado\n");
	}

	return 0;
}
*/
