/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:53:21 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:49:11 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t		i;
	char		*d;
	const char	*s;
	char		*tmp;

	i = 0;
	d = dest;
	s = src;
	tmp = malloc(count * sizeof(char));
	if (!tmp)
		return (NULL);
	while (i < count)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < count)
	{
		d[i] = tmp[i];
		i++;
	}
	free (tmp);
	return (d);
}
