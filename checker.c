/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:45:43 by marcsan2          #+#    #+#             */
/*   Updated: 2025/12/26 16:14:04 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_a_number(char *num)
{
	char	*converted;

	converted = ft_atoicheck(num);
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
	if (!nums)
		return (0);
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size - 1)
		{
			if (nums[i] == nums[j])
			{
				free(nums);
				return (0);
			}
			j ++;
		}
		i ++;
	}
	free (nums);
	return (1);
}

int	check_numbers(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!is_a_number(argv[i]))
		{
			return (0);
		}
		i++;
	}
	if (!search_duplicates(argv, i))
		return (0);
	return (i -1);
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
