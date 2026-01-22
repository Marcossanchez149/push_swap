/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoichecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:29:00 by marcsan2          #+#    #+#             */
/*   Updated: 2026/01/13 15:21:42 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	atoi_loop(const char *str, int cont, long *to_return, int changed)
{
	while (str[cont])
	{
		if (str[cont] >= '0' && str[cont] <= '9')
		{
			*to_return = (*to_return * 10) + (str[cont] - '0');
			changed = 1;
		}
		else
		{
			changed = 0;
			break ;
		}
		cont ++;
	}
	return (changed);
}

int	ft_atoicheck(const char *str)
{
	int		cont;
	long	to_return;
	int		neg;
	int		changed;

	neg = 0;
	cont = 0;
	to_return = 0;
	changed = 0;
	if (str[cont] == '-')
	{
		neg++;
		cont++;
	}
	changed = atoi_loop(str, cont, &to_return, changed);
	if (neg == 1)
		to_return = to_return * (-1);
	if (to_return > INT_MAX || to_return < INT_MIN || !changed)
		return (0);
	return (1);
}
