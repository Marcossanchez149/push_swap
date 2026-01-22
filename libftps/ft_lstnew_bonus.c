/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:08:02 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 11:54:37 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Creates new node and adds content
#include "libft.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*lis;

	lis = (t_stack *)malloc(sizeof(t_stack));
	if (!lis)
		return (NULL);
	lis->value = content;
	lis->next = NULL;
	return (lis);
}
