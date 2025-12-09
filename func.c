/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:24:30 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/09 16:58:46 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	*return_numbers(char *argv, int size)
{
	int	i;
	int	*numbers;

	i = 0;
	numbers = malloc(sizeof(int) * size);
	while (argv[i])
	{
		numbers[i] = ft_atoi(argv[i]);
		i++;
	}
	return (1);
}

t_list	*inicialice_stack(int *argv)
{
	int		i;
	t_list	*resul;

	i = 0;
	while (argv[i])
	{
		ft_lstadd_back(resul, ft_lstnew(argv[i]));
		i ++;
	}
	return (resul);
}

t_list	*ft_lstnew(int content)
{
	t_list	*lis;

	lis = (t_list *)malloc(sizeof(t_list));
	if (!lis)
		return (NULL);
	lis->value = content;
	lis->next = NULL;
	lis->cost_a = 0;
	lis->cost_b = 0;
	lis->index = 0;
	lis->pos = 0;
	lis->target_pos = 0;
	return (lis);
}