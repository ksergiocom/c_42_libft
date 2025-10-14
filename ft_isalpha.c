/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:27:52 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:28:39 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/*
int main()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es alfa: %d\n", c1, ft_isalpha(c1));
	printf("%c es alfa: %d\n", c2, ft_isalpha(c2));
	printf("%c es alfa: %d\n", c3, ft_isalpha(c3));
	printf("%c es alfa: %d\n", c4, ft_isalpha(c4));
	
	return 0;
}
*/
