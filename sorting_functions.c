/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:58:03 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/26 15:50:45 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_pos(t_stack **stack)
{
	t_stack	*tmp;
	int		min_idx;
	int		min_pos;

	tmp = *stack;
	min_idx = 2147483647;
	min_pos = 0;
	while (tmp)
	{
		if (tmp->index < min_idx)
		{
			min_idx = tmp->index;
			min_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (min_pos);
}

int	get_target(t_stack **stack, int index)
{
	t_stack	*tmp_a;
	t_stack	*target_node;
	int		target;

	tmp_a = *stack;
	target_node = NULL;
	target = 2147483647;
	while (tmp_a)
	{
		if (tmp_a->index > index && tmp_a->index < target)
		{
			target = tmp_a->index;
			target_node = tmp_a;
		}
		tmp_a = tmp_a->next;
	}
	if (target == 2147483647)
		return (get_min_pos(stack));
	if (target_node == NULL)
		return (get_min_pos(stack));
	return (target_node->pos);
}

void	send_tob(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = 0;
	size = size - 3;
	while (i < size)
	{
		pb(stack_a, stack_b);
		i ++;
	}
}

void	get_position(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *stack;
	while (temp)
	{
		temp->pos = i;
		i ++;
		temp = temp->next;
	}
}

void	get_final_position(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;
	int		target_pos;

	tmp_b = *stack_b;
	get_position(stack_a);
	get_position(stack_b);
	while (tmp_b)
	{
		target_pos = get_target(stack_a, tmp_b->index);
		tmp_b->target_pos = target_pos;
		tmp_b = tmp_b->next;
	}
}
