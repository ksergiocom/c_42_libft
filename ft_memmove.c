/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:53:21 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:54:17 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

/*
int main()
{
	char str[] = "Hola mundo!";
	char copied[20];

	ft_memmove(copied, str, 6);

	printf("%s\n", copied);

	return 0;	
}
*/
