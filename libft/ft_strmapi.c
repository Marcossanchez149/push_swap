/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:52:18 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:16:08 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send char to char of a string to a function and update with the result
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*final;
	int		size;

	i = 0;
	size = ft_strlen(s) +1 ;
	final = (char *)malloc(size * sizeof(char));
	if (!final)
		return (NULL);
	while (s[i] != '\0')
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
