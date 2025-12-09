/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:08:02 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 15:33:19 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Creates new node and adds content
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lis;

	lis = (t_list *)malloc(sizeof(t_list));
	if (!lis)
		return (NULL);
	lis->content = content;
	lis->next = NULL;
	return (lis);
}
