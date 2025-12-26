/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 12:50:49 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/26 16:03:00 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	specialcase(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = first->next;
	if (first->value > second->value)
		sa(stack_a, 1);
}

void	smallsort(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*medium;
	t_stack	*last;

	first = *stack_a;
	medium = first->next;
	last = medium->next;
	if ((first->value > medium->value) && (first->value > last->value))
		ra(stack_a, 1);
	else if ((medium->value > last->value) && (medium->value > first->value))
		rra(stack_a, 1);
	first = *stack_a;
	medium = first->next;
	last = medium->next;
	if ((first->value > medium->value))
		sa(stack_a, 1);
}

void	ordenator(t_stack **stack_a, t_stack **stack_b, int size)
{
	send_tob(stack_a, stack_b, size);
	smallsort(stack_a);
	while (*stack_b)
	{
		get_final_position(stack_a, stack_b);
		get_cost(stack_a, stack_b);
		do_cheapest_move(stack_a, stack_b);
	}
	if (!is_sorted(*stack_a))
		shift_stack(stack_a);
}

void	sorting(char **argv, int size)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = inicialice_stack(return_numbers(argv, size), size);
	assign_index(stack_a, size, return_numbers(argv, size));
	if (!stack_a)
		return ;
	stack_b = NULL;
	if (size == 2)
		specialcase(&stack_a);
	else if (size == 3)
		smallsort(&stack_a);
	else
		ordenator (&stack_a, &stack_b, size);
	free_stack(&stack_a);
	free_stack(&stack_b);
}

int	main(int argc, char **argv)
{
	int	size;

	if (argc > 1)
	{
		size = check_numbers(argv);
		if (size == 0)
		{
			ft_printf("Error\n");
			return (0);
		}
		if (!(size == 1))
			sorting(argv, size);
	}
	return (0);
}
