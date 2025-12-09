/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:29:07 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/09 11:27:26 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//from *str to int
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cont;
	int	to_return;
	int	neg;

	neg = 0;
	cont = 0;
	to_return = 0;
	while (str[cont] == ' ' || str[cont] == '\n'
		|| str[cont] == '\r' || str[cont] == '\t'
		|| str[cont] == '\f' || str[cont] == '\v')
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
		to_return = 0;
	return (to_return);
}

/*#include <stdio.h>
int main(int argc,char **argv)
{
    if(argc > 2)
    {
        return(3);
    }
    printf("%d", ft_atoi(argv[1]));
    return (4);
}*/