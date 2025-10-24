/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:15:12 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/24 22:35:30 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;

	if (dsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
