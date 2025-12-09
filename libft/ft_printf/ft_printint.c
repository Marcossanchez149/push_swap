/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:38:42 by marcsan2          #+#    #+#             */
/*   Updated: 2025/11/23 13:02:08 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_unsignedint(unsigned int towrite)
{
	size_t	i;

	i = 0;
	if (towrite > 9)
	{
		i += ft_putnbr_fdv2(towrite / 10);
		i += ft_putnbr_fdv2(towrite % 10);
	}
	else
		i += ft_putchar_fd(towrite + '0', 1);
	return (i);
}

int	ft_putnbr_fdv2(int towrite)
{
	size_t	i;

	i = 0;
	if (towrite == -2147483648)
	{
		i += printstr("-2147483648");
		return (i);
	}
	if (towrite < 0)
	{
		i += ft_putchar_fd('-', 1);
		i += ft_putnbr_fdv2(-towrite);
	}
	if (towrite > 9)
	{
		i += ft_putnbr_fdv2(towrite / 10);
		i += ft_putnbr_fdv2(towrite % 10);
	}
	else
	{
		if (towrite >= 0)
			i += ft_putchar_fd(towrite + '0', 1);
	}
	return (i);
}
