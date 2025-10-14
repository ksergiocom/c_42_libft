/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:57:02 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/14 20:57:48 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, sizeof(n));
}

/*
int main(){
	
	ft_putnbr_fd(123, 1);

	return 0;
}
*/
