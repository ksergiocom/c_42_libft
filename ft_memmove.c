/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:53:21 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/25 15:43:00 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	are_overlaping(void *dest, const void *src, size_t count)
{
	return (src < dest && src + count - 1 >= dest);
}

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)src;
	if (!are_overlaping(d, s, count))
		ft_memcpy(dest, src, count);
	else
	{
		d += count;
		s += count;
		while (count--)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	return (void *)d;
}
