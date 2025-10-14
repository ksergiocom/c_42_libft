/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:05:47 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 21:38:29 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *s)
{
	char	signo;
	int		res;

	signo = 0;
	res = 0;
	while (*s++)
	{
		if (ft_isdigit(*s))
			res = res * 10 + *s - 48;
		else
		{
			if (signo)
				return (res);
			else if (*s == '-')
				signo = '-';
			else if (*s == '+')
				signo = '+';
			else
			{
				if (signo == '-')
					res *= -1;
				return (res);
			}
		}
	}
	if (signo == '-')
		res *= -1;
	return (res);
}

/*
void test_atoi(const char *s){
	printf("---------\n");
	printf("String: %s\n", s);
	printf("Mi atoi: %d\n", ft_atoi(s));
	printf("Original atoi:%d\n", atoi(s));
	printf("---------\n");
}

int main(){

	test_atoi("123");
	test_atoi("123456789123456789");
	test_atoi("-123");
	test_atoi("+123");
	test_atoi("--123");
	test_atoi("---123");
	test_atoi("+123");
	test_atoi("++123");
	test_atoi("123asd123");
	test_atoi("asd123");
	test_atoi("123abc");

	return 0;
}
*/
