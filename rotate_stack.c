/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:32:41 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 17:15:36 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack **a, int print)
{
	rotate(a);
	if (print)
		ft_printf("ra\n");
}

void	rb(t_stack **b, int print)
{
	rotate(b);
	if (print)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
