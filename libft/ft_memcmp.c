/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:05:10 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:10:40 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compare two string char by char till n,if n is bigger than size it can fail
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
 
int main(int argc, char ** argv)
{
  int  result;
  result = ft_memcmp( argv[1], argv[2], 5 );

  	if ( result == 0 )
  		printf( "\"%s\" is identical to \"%s\"\n", argv[1], argv[2] );
	else if ( result < 0 )
       printf( "\"%s\" is less than \"%s\"\n", argv[1], argv[2] );
	else
       printf( "\"%s\" is greater than \"%s\"\n", argv[1], argv[2] );
}*/