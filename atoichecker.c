/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoichecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:29:00 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/26 13:46:05 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_atoicheck(const char *str)
{
	int		cont;
	long	to_return;
	int		neg;

	neg = 0;
	cont = 0;
	to_return = 0;
	while (str[cont] == ' ' || str[cont] == '\n' || str[cont] == '\r'
		|| str[cont] == '\t' || str[cont] == '\f' || str[cont] == '\v')
		cont++;
	if (str[cont] == '+' || str[cont] == '-')
	{
		if (str[cont] == '-')
			neg++;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
		to_return = (to_return * 10) + (str[cont++] - '0');
	if (neg % 2 != 0)
		to_return = to_return * (-1);
	if (to_return > INT_MAX || to_return < INT_MIN)
		return ("\0");
	return ("1");
}
