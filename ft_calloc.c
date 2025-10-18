/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:23:47 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:34:06 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc (nmemb * size);
	// if (nmemb != 0 && size > SIZE_MAX / nmemb)
	// 	return (NULL);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

