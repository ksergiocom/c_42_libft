/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:31:08 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 21:31:53 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - ('a' - 'A'));
	return (c);
}

/*
int main()
{
	printf("ft_tolower(%c): %c\n", 'A', ft_toupper('A'));
	printf("ft_tolower(%c): %c\n", 'z', ft_toupper('Z'));
	printf("ft_tolower(%c): %c\n", 'a', ft_toupper('a'));
	printf("ft_tolower(%c): %c\n", '!', ft_toupper('!'));
	printf("ft_tolower(%c): %c\n", '0', ft_toupper('0'));
	printf("ft_tolower(%c): %c\n", 245, ft_toupper(245));
	
	return 0;
}
*/
