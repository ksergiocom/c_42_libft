/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:18:20 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 07:53:40 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_lst *new)
{
	t_list last_nodo;

	last_nodo = ft_lstlast(lst);
	if(!last_nodo)
		*lst = new;
	else
		last_nodo->next = new;
}
