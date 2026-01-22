/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:07:55 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 13:49:16 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstmap(t_stack *lst, int (*f)(int), void (*del)(int))
{
	int		buffer;
	t_stack	*node;
	t_stack	*new_list;

	if (!lst || !f || !del)
		return (0);
	buffer = 0;
	new_list = NULL;
	while (lst)
	{
		buffer = f(lst->value);
		node = ft_lstnew(buffer);
		if (!node)
		{
			del(buffer);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
