/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:35:18 by marcsan2          #+#    #+#             */
/*   Updated: 2025/11/23 13:06:50 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	write_special(char type, va_list argptr)
{
	if (type == 'c')
		return (printchar(va_arg (argptr, int)));
	else if (type == 's')
		return (printstr(va_arg (argptr, char *)));
	else if (type == 'p')
		return (ft_printhexa_vpoint(va_arg (argptr, void *)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr_fdv2(va_arg (argptr, int)));
	else if (type == 'u')
		return (print_unsignedint(va_arg (argptr, unsigned int)));
	else if (type == 'x')
		return (ft_printhexa(va_arg (argptr, unsigned int), type));
	else if (type == 'X')
		return (ft_printhexa(va_arg (argptr, unsigned int), type));
	else if (type == '%')
		return (write (1, "%", 1));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	argptr;
	int		cont;
	int		sol;

	if (!str)
		return (-1);
	va_start(argptr, str);
	cont = 0;
	sol = 0;
	while (str[cont])
	{
		if (str[cont] == '%')
		{
			cont ++;
			sol += write_special(str[cont], argptr);
		}
		else
			sol += ft_putchar_fd(str[cont], 1);
		cont ++;
	}
	va_end(argptr);
	return (sol);
}
