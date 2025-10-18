/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:33:46 by sekhudol          #+#    #+#             */
/*   Updated: 2025/10/18 07:51:41 by sekhudol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	lst_size;
	t_lst	**new_lst;
	t_lst	*nodo_iterado;
	t_lst	*new_nodo;

	lst_size = ft_lstsize(lst);
	new_lst = malloc(lst_size * sizeof(t_lst));
	if (!new_lst)
		return (NULL);
	while (lst)
	{
		new_nodo = ft_lstnew(f(lst->content));
		ft_lstlast(new_lst, new_nodo);
		lst = lst->next;
	}
	
}
