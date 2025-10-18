/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:10:20 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:57:56 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		str1_len;
	int		str2_len;
	char	*joined;

	j = 0;
	str1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	joined = malloc((str1_len + str2_len + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	while (*s1)
	{
		joined[j] = *s1++;
		j++;
	}
	while (*s2)
	{
		joined[j] = *s2++;
		j++;
	}
	joined[j] = '\0';
	return (joined);
}
