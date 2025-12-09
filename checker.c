/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:45:43 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/09 16:58:43 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	is_a_number(char *num)
{
	int	converted;

	converted = ft_atoi(num);
	if (!converted)
		return (0);
	return (1);
}

int	search_duplicates(char **argv, int size)
{
	int	i;
	int	*nums;
	int	j;

	i = 0;
	nums = return_numbers(argv, size);
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (nums[i] == nums[j])
				return (0);
			j ++;
		}
		i ++;
	}
}

int	check_numbers(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!is_a_number(argv[i]))
			return (0);
		i++;
	}
	if (search_duplicates(argv, i))
		return (0);
	return (i);
}

int	size_matrix(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		i ++;
	}
	return (i);
}