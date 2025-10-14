/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:31:50 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:37:08 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*string;
	char	negativo;
	int		digits;
	int		tmp;

	negativo = 0;
	digits = 0;
	tmp = n;
	if (n == 0)
	{
		string = malloc(2 * sizeof(char));
		if (!string)
			return (NULL);
		string[0] = '0';
		return (string);
	}
	if (tmp < 0)
	{
		negativo = '-';
		tmp *= -1;
	}
	while (tmp > 0)
	{
		tmp /= 10;
		digits++;
	}
	if (negativo)
		digits++;
	string = malloc((digits + 1) * sizeof(char));
	if (!string)
		return (NULL);
	tmp = n;
	if (negativo)
	{
		tmp *= -1;
		string[0] = '-';
	}
	while (tmp > 0)
	{
		string[digits - 1] = (tmp % 10) + '0';
		tmp /= 10;
		digits--;
	}
	return (string);
}

/*
void check_itoa(int n){
	printf("mi itoa: %s\n", ft_itoa(n));
	return;
}


int main(){

	check_itoa(1);
	check_itoa(0);
	check_itoa(123);
	check_itoa(-1);
	check_itoa(+1);
	check_itoa(999999999);

	return 0;
}
*/
