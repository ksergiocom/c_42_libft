/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:05:47 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:31:07 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char s)
{
	if (s >= 9 && s <= 13)
		return (1);
	if (s == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	char	signo;
	int		res;

	signo = 1;
	res = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			signo = -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (res * signo);
}
