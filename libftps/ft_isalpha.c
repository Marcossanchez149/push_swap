/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:43:05 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/21 12:37:05 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	char prueba = '1';
	int to_write = ft_isalpha(prueba);
	printf("%d", to_write);
	return(0);
}*/
