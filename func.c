/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:24:30 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 11:49:33 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	*return_numbers(char **argv, int size)
{
	int	i;
	int	*numbers;

	i = 1;
	numbers = malloc(sizeof(int) * size);
	while (argv[i])
	{
		numbers[i] = ft_atoi(argv[i]);
		i++;
	}
	return (numbers);
}

t_stack	*ft_lstnew_stack(int content)
{
	t_stack	*lis;

	lis = (t_stack *)malloc(sizeof(t_stack));
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


t_stack	*inicialice_stack(int *argv, int size)
{
	int		i;
	t_stack	*resul;
	t_stack	*temp;

	i = 0;
	resul = NULL;
	temp = NULL;
	while (i < size)
	{
		temp = ft_lstnew_stack(argv[i]);
		if (temp)
			ft_lstadd_back(&resul, temp);
		i ++;
	}
	free(argv);
	return (resul);
}

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void	assign_index(t_stack *stack_a, int size, int *nums)
{
	t_stack	*ptr;
	int		i;

	sort_int_tab(nums, size);
	ptr = stack_a;
	while (ptr)
	{
		i = 0;
		while (i < size)
		{
			if (nums[i] == ptr->value)
			{
				ptr->index = i;
				break ;
			}
			i++;
		}
		ptr = ptr->next;
	}
	free(nums);
}
