/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:49:27 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/21 12:37:44 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int letter)
{
	if (letter >= 32 && letter <= 126)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	char c;

	c = 'Q';
	printf("Con %c es : %d", c, ft_isprint(c));

	c = '\n';
	printf("\n Con %c es: %d", c, ft_isprint(c));

	return 0;
}*/