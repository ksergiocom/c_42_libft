/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:50:36 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/24 22:32:30 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
