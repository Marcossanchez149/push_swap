/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:42:33 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 16:41:23 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_per_cost(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ra(a, 1);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rra(a, 1);
			(*cost)++;
		}
	}
}

void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a > 0 && cost_b > 0)
	{
		while (cost_a > 0 && cost_b > 0)
		{
			rr(a, b);
			cost_a--;
			cost_b--;
		}
	}
	else if (cost_a < 0 && cost_b < 0)
	{
		while (cost_a < 0 && cost_b < 0)
		{
			rrr(a, b);
			cost_a++;
			cost_b++;
		}
	}
	rotate_per_cost(a, &cost_a);
	rotate_per_cost(b, &cost_b);
	pa(a, b);
}

void	do_cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheapest_node;

	cheapest_node = get_cheapest_node(*stack_b);
	if (cheapest_node)
	{
		do_move(stack_a, stack_b, cheapest_node->cost_a, cheapest_node->cost_b);
	}
}
