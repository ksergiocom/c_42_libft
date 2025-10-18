/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:33:46 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 07:51:41 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	lst_size;
	t_list	**new_lst;
	t_list	*nodo_iterado;
	t_list	*new_nodo;

	lst_size = ft_listsize(lst);
	new_lst = malloc(lst_size * sizeof(t_list));
	if (!new_lst)
		return (NULL);
	while (lst)
	{
		new_nodo = ft_listnew(f(lst->content));
		ft_listlast(new_lst, new_nodo);
		lst = lst->next;
	}
	
}
