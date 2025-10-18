/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:31:50 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 08:40:33 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*handle_zero(void)
{
	char	*string;

	string = malloc(2 * sizeof(char));
	if (!string)
		return (NULL);
	string[0] = '0';
	string[1] = '\0';
	return (string);
}

long	handle_negativo(long n, char *string)
{
	string[0] = '-';
	return (n * -1);
}

int	count_length(long n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*string;
	char	negativo;
	int		digits;
	long	nbr;

	negativo = 0;
	if (n == 0)
		return (handle_zero());
	nbr = n;
	negativo = (nbr < 0);
	digits = count_length(nbr);
	string = malloc((digits + 1) * sizeof(char));
	if (!string)
		return (NULL);
	if (negativo)
		nbr = handle_negativo(nbr, string);
	string[digits] = '\0';
	while (nbr > 0)
	{
		string[digits - 1] = (nbr % 10) + '0';
		nbr /= 10;
		digits--;
	}
	return (string);
}

