/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:41:15 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/18 16:34:26 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>


int		check_numbers(char **argv);
int		*return_numbers(char **argv, int size);
int		size_matrix(char **argv);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	send_tob(t_stack **stack_a, t_stack **stack_b, int size);
void	get_position(t_stack **stack);
t_stack	*inicialice_stack(int *argv, int size);
void	assign_index(t_stack *stack_a, int size, int *nums);
void	get_final_position(t_stack **stack_a, t_stack **stack_b);
void	get_cost(t_stack **stack_a, t_stack **stack_b);
int		get_stack_size(t_stack *stack);
t_stack	*get_cheapest_node(t_stack *stack_b);
void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void	do_cheapest_move(t_stack **stack_a, t_stack **stack_b);
int		is_sorted(t_stack *stack);
void	shift_stack(t_stack **stack_a);

#endif