/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:05:00 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 11:18:03 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack *lst)
{
	int	cont;

	cont = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		cont ++;
	}
	return (cont);
}
