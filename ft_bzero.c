/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:21:04 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:31:27 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *dest, size_t count)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *) dest;
	while (i < count)
	{
		s[i] = '\0';
		i++;
	}
	return (dest);
}
