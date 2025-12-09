/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:32:41 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/09 15:50:27 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *a)
{
	int	i;
	int	sizea;
	int	temp;

	sizea = size_matrix(a);
	if (sizea < 2)
		return ;
	i = 0;
	temp = a[i];
	while (i < sizea - 1)
	{
		a[i] = a[i +1];
		i++;
	}
	a[sizea - 1] = temp;
	ft_printf("ra\n");
}

void	rb(int *b)
{
	int	i;
	int	sizeb;
	int	temp;

	sizeb = size_matrix(b);
	if (sizeb < 2)
		return ;
	i = 0;
	temp = b[i];
	while (i < sizeb - 1)
	{
		b[i] = b[i +1];
		i++;
	}
	b[sizeb -1] = temp;
	ft_printf("rb\n");
}

void	rr(int *a, int *b)
{
	int	i;
	int	size;
	int	temp;

	size = size_matrix(a);
	i = 0;
	temp = a[i];
	while (i < size -1)
	{
		a[i] = a[i +1];
		i++;
	}
	a[size -1] = temp;
	size = size_matrix(b);
	i = 0;
	temp = b[i];
	while (i < size - 1)
	{
		b[i] = b[i +1];
		i++;
	}
	b[size - 1] = temp;
	ft_printf("rr\n");
}

void	rra(int *a)
{
	int	i;
	int	sizea;
	int	temp;

	sizea = size_matrix(a);
	if (sizea < 2)
		return ;
	i = sizea - 1;
	temp = a[i];
	while (i > 0)
	{
		a[i] = a[i -1];
		i--;
	}
	a[0] = temp;
	ft_printf("rra\n");
}

void	rrb(int *b)
{
	int	i;
	int	sizea;
	int	temp;

	sizea = size_matrix(b);
	if (sizea < 2)
		return ;
	i = sizea - 1;
	temp = b[i];
	while (i > 0)
	{
		b[i] = b[i -1];
		i--;
	}
	b[0] = temp;
	ft_printf("rrb\n");
}