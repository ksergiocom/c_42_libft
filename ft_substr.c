/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:29:28 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/15 14:58:14 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = malloc((len + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*
int main()
{
	char *str = "supercalifragilisticoespialidoso";
	char *new_substr = ft_substr(str, 3, 100);

	printf("str: %s\n",str);
	printf("new_substr: %s\n",new_substr);

	return 0;
}
*/
