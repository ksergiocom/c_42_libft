/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:10:20 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 21:11:39 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		str1_len;
	int		str2_len;
	char	*joined;

	i = 0;
	j = 0;
	str1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	*joined = malloc((str1_len + str2_len + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		joined[j] = s2[i];
		i++;
		j++;
	}
	joined[j] = '\0';
	return (joined);
}

/*
int main()
{
	char *str1 = "super";
	char *str2 = "cosa";

	char *joined_str = ft_strjoin(str1, str2);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("joined_str: %s\n", joined_str);

	return 0;
}
*/
