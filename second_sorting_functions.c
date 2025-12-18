/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_sorting_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:56:20 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 16:28:59 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	get_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_b = *stack_b;
	size_a = get_stack_size(*stack_a);
	size_b = get_stack_size(*stack_b);
	while (tmp_b)
	{
		if (tmp_b->pos <= size_b / 2)
			tmp_b->cost_b = tmp_b->pos;
		else
			tmp_b->cost_b = tmp_b->pos - size_b;
		if (tmp_b->target_pos <= size_a / 2)
			tmp_b->cost_a = tmp_b->target_pos;
		else
			tmp_b->cost_a = tmp_b->target_pos - size_a;

		tmp_b = tmp_b->next;
	}
}

int	nb_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

t_stack	*get_cheapest_node(t_stack *stack_b)
{
	t_stack	*cheapest_node;
	int		min_cost;
	int		current_cost;

	cheapest_node = NULL;
	min_cost = INT_MAX;
	while (stack_b)
	{
		if ((stack_b->cost_a > 0 && stack_b->cost_b > 0)
			|| (stack_b->cost_a < 0 && stack_b->cost_b < 0))
		{
			if (nb_abs(stack_b->cost_a) > nb_abs(stack_b->cost_b))
				current_cost = nb_abs(stack_b->cost_a);
			else
				current_cost = nb_abs(stack_b->cost_b);
		}
		else
			current_cost = nb_abs(stack_b->cost_a) + nb_abs(stack_b->cost_b);

		if (current_cost < min_cost)
		{
			min_cost = current_cost;
			cheapest_node = stack_b;
		}
		stack_b = stack_b->next;
	}
	return (cheapest_node);
}

int	is_sorted(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp)
	{
		if (temp->index > temp->next->index)
			return (0);
		temp = temp-> next;	
	}
	return (1);
}
