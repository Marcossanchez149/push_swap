/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stac_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:20:11 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/09 15:10:19 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int **a)
{
	int	temp;

	if (a[0] && a[1])
	{
		temp = a[1];
		a[1] = a[0];
		a[0] = temp;
	}
	ft_printf("sa\n");
}

void	sb(int **b)
{
	int	temp;

	if (b[0] && b[1])
	{
		temp = b[1];
		b[1] = b[0];
		b[0] = temp;
	}
	ft_printf("sb\n");
}

void	ss(int *a, int *b)
{
	int	temp;

	if (a[0] && a[1])
	{
		temp = a[1];
		a[1] = a[0];
		a[0] = temp;
	}
	if (b[0] && b[1])
	{
		temp = b[1];
		b[1] = b[0];
		b[0] = temp;
	}
	ft_printf("ss\n");
}

void	pa(int *a, int *b)
{
	int	i;
	int	sizea;
	int	sizeb;

	sizea = size_matrix(a);
	sizeb = size_matrix(b);
	i = sizea;
	if (b[0])
	{
		while (i > 0)
		{
			a[i] = a[i -1];
			i--;
		}
		a[i] = b[i];
		while (i < sizeb)
		{
			b[i] = b[i +1];
			i ++;
		}
		ft_printf("pa\n");
	}
}

void	pb(int *a, int *b)
{
	int	i;
	int	sizea;
	int	sizeb;

	sizea = size_matrix(a);
	sizeb = size_matrix(b);
	i = sizeb;
	if (a[0])
	{
		while (i > 0)
		{
			b[i] = b[i -1];
			i--;
		}
		b[i] = a[i];
		while (i < sizea)
		{
			a[i] = a[i +1];
			i ++;
		}
		ft_printf("pb\n");
	}
}
