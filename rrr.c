/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:51:14 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/09 15:54:53 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(int *a, int *b)
{
	int	i;
	int	size;
	int	temp;

	size = size_matrix(a);
	i = size - 1;
	temp = a[i];
	while (i > 0)
	{
		a[i] = a[i -1];
		i--;
	}
	a[0] = temp;
	size = size_matrix(b);
	i = size - 1;
	temp = b[i];
	while (i > 0)
	{
		b[i] = b[i -1];
		i--;
	}
	b[0] = temp;
	ft_printf("rrr\n");
}