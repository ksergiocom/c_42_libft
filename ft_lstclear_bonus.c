/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:25:37 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 07:30:56 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_lst **lst, void (*del)(void *))
{
	if(*lst->next)
		ft_lstdelone(*lst->next, del);
	else
		ft_lstdelone(*lst, del);
}
