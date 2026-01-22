/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:27:08 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 11:16:27 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Adds new node in the beggining
#include "libft.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
