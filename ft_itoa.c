/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:31:50 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/15 13:09:33 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	count_length(int n)
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

	negativo = 0;
	digits = 0;
	if (n == 0)
		return (handle_zero());
	negativo = (n < 0);
	digits = count_length(n);
	string = malloc((digits + 1) * sizeof(char));
	if (!string)
		return (NULL);
	if (negativo)
	{
		string[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		string[digits - 1] = (n % 10) + '0';
		n /= 10;
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
