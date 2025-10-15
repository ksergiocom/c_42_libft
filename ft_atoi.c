/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:05:47 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/15 14:48:51 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
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
