/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:19:21 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:13:50 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send the pointer char to char of a string to a function recibed
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s) +1;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
