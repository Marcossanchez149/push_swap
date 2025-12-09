/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 12:50:49 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/09 17:03:16 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		sorting(argv, size);
	}
	return (0);
}

void	sorting(char **argv, int size)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*converted;

	converted = return_numbers(argv, size);
	if (size == 3 || size == 5)
		specialcase(argv, size);
	
}

void	specialcase(char **argv, int size)
{
	
}