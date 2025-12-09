/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:58:43 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/21 12:33:13 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizeofint(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n = n / 10;
		i ++;
	}
	return (i);
}

static char	*is_int_min(void)
{
	char	*result;

	result = malloc(12);
	if (!result)
		return (NULL);
	result[0] = '-';
	result[1] = '2';
	result[2] = '1';
	result[3] = '4';
	result[4] = '7';
	result[5] = '4';
	result[6] = '8';
	result[7] = '3';
	result[8] = '6';
	result[9] = '4';
	result[10] = '8';
	result[11] = '\0';
	return (result);
}

static char	*principal_loop(char *result, int size, int i, int n )
{
	char	add;

	if (!result)
		return (NULL);
	size --;
	result[size] = '\0';
	size --;
	while (i <= size)
	{
		add = n % 10;
		result[size] = (add + '0');
		n = n / 10;
		size --;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;
	int		neg;

	size = 0;
	neg = 0;
	if (n == -2147483648)
		return (is_int_min());
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	size = sizeofint(n) + 1 + neg;
	result = (char *)malloc(size * sizeof(char));
	if (!result)
		return (NULL);
	if (neg)
		result[0] = '-';
	return (principal_loop(result, size, neg, n));
}

/*
#include <stdio.h>
int	main(void)
{
	char	*resultado;
	unsigned int		prueba;

	prueba = 145;
	resultado = ft_itoa(prueba);
	printf(resultado);
	return (0);
}*/