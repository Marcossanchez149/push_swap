/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:18:41 by marcsan2          #+#    #+#             */
/*   Updated: 2025/11/23 12:59:53 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	printstr(char	*towrite)
{
	int	size;

	if (!towrite)
		return (write(1, "(null)", 6));
	size = ft_strlen(towrite);
	return (write (1, towrite, size));
}

int	printchar(int chr)
{
	return (ft_putchar_fd(chr, 1));
}
