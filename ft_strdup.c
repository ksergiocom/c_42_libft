/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:07:08 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 21:09:05 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*p;

	len = ft_strlen(s);
	*p = (char *) ft_calloc(sizeof(char), len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, len);
	return (p);
}

/*
int main(){

	char *s = "Hola mundo!";
	char *copia;

	copia = ft_strdup(s);

	printf("%s\n", copia);

	free(copia);

	return 0;
}
*/
