/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:14:27 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/24 20:27:43 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	initial_len_dst;
	size_t	initial_len_src;
	size_t	final_len;
	size_t	j;
	size_t	i;

	initial_len_dst = ft_strlen(dst);
	initial_len_src = ft_strlen(src);
	final_len = initial_len_dst + initial_len_src;
	j = 0;
	if (size <= initial_len_dst)
		return (size + initial_len_src);
	i = initial_len_dst;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (final_len);
}
