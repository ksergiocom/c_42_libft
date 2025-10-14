/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:50:36 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:51:37 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char *string = "Hola que tal";
	char dest_string[20];

	ft_memcpy(dest_string, string, 5);

	printf("%s\n", dest_string);

	return 0;
}
*/
