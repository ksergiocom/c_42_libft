/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:37:37 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:47:14 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

