/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:31:45 by marcsan2          #+#    #+#             */
/*   Updated: 2025/11/23 12:59:47 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printhexa_vpoint(void	*towrite)
{
	int	i;

	if (!towrite)
		return (write(1, "(nil)", 5));
	i = 0;
	i = write(1, "0x", 2);
	i += ft_printhexa((size_t)towrite, 'x');
	return (i);
}

int	ft_printhexa(size_t num, char type)
{
	int		i;

	if (num == 0)
		return (ft_putchar_fd('0', 1));
	if (!num)
		return (write(1, "(nil)", 5));
	i = 0;
	if (num < 0)
	{
		i += ft_putchar_fd('-', 1);
		i += ft_printhexa(-num, type);
	}
	if (num >= 16)
	{
		i += ft_printhexa(num / 16, type);
	}
	if (num % 16 <= 9)
		i += ft_putchar_fd(num % 16 + '0', 1);
	else if (type == 'x')
		i += ft_putchar_fd(num % 16 - 10 + 'a', 1);
	else
		i += ft_putchar_fd(num % 16 - 10 + 'A', 1);
	return (i);
}
