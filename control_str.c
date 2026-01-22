/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:47:45 by marcsan2          #+#    #+#             */
/*   Updated: 2026/01/15 12:51:17 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**generate_new_argv(char *prog_name, char *arg_str)
{
	char	**split_res;
	char	**new_argv;
	int		count;
	int		i;

	split_res = ft_split(arg_str, ' ');
	if (!split_res)
		return (NULL);
	count = 0;
	while (split_res[count])
		count++;
	new_argv = malloc(sizeof(char *) * (count + 2));
	if (!new_argv)
		return (NULL);
	new_argv[0] = ft_strdup(prog_name);
	i = 0;
	while (split_res[i])
	{
		new_argv[i + 1] = split_res[i];
		i++;
	}
	new_argv[i + 1] = NULL;
	free (split_res);
	return (new_argv);
}

void	free_argv(char **argv)
{
	int	cont;

	cont = 0;
	while (argv[cont])
	{
		free(argv[cont]);
		cont ++;
	}
	free(argv);
}
