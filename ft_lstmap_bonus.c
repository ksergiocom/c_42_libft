/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:33:46 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/24 22:28:36 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_nodo;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_nodo = ft_lstnew(f(lst->content));
		if (!new_nodo)
		{
			ft_lstclear(&new_nodo, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_nodo);
		lst = lst->next;
	}
	return (new_lst);
}
