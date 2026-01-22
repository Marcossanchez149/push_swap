/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 10:52:14 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:16:26 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compare two strings till n
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	char buffer1[10] = "abczefg";
	char buffer2[10] = "abcfg";
	int result;

	result = ft_strncmp( buffer1, buffer2, 5);
	if (result == 0 )
    printf( "Son identicos");
  else if (result < 0 )
    printf( "s1 menor que s2" );
  else
    printf( "s1 mayor que s2" );
}*/