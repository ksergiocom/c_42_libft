/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:26:39 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:27:03 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = '9';
	char c4 = '%';
	
	printf("%c es alfanum: %d\n", c1, ft_isalnum(c1));
	printf("%c es alfanum: %d\n", c2, ft_isalnum(c2));
	printf("%c es alfanum: %d\n", c3, ft_isalnum(c3));
	printf("%c es alfanum: %d\n", c4, ft_isalnum(c4));
	
	return 0;
}
*/
