/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:07:08 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:56:17 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*p;

	len = ft_strlen(s);
	p = (char *) ft_calloc(sizeof(char), len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, len + 1);
	return (p);
}

