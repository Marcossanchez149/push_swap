/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:47:26 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 11:56:44 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//delete the content of lst
#include "libft.h"

void	ft_lstdelone(t_stack *lst, void (*del)(int))
{
	if (lst)
		del(lst->value);
	free(lst);
}
