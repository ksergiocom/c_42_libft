/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_separator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:06:57 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/16 15:07:41 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_skip_separator(const char **s, char separator)
{
	while(**s && **s == separator)
		(*s)++;
}
