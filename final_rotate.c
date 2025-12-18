/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:32:54 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 16:34:17 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_lowest_index_pos(t_stack **stack)
{
	t_stack	*tmp;
	int		lowest_index;
	int		lowest_pos;

	tmp = *stack;
	lowest_index = 2147483647;
	get_position(stack);
	lowest_pos = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_index)
		{
			lowest_index = tmp->index;
			lowest_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_pos);
}

void	shift_stack(t_stack **stack_a)
{
	int	lowest_pos;
	int	size;

	size = get_stack_size(*stack_a);
	lowest_pos = get_lowest_index_pos(stack_a);
	if (lowest_pos < size / 2)
	{
		while ((*stack_a)->index != 0)
		{
			ra(stack_a, 1);
		}
	}
	else
	{
		while ((*stack_a)->index != 0)
		{
			rra(stack_a, 1);
		}
	}
}
