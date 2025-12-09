/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 11:18:32 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:09:45 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Search first aparition of c in s and return pointer to the position
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i ++;
	}
	return (NULL);
}

/*
#include <stdio.h>
 
int main(int argc, char ** argv)
{
  char * result;
 
  if ( argc != 2 )
    printf( "Usage: %s string\n", argv[0] );
  else
  {
    if ((result = (char *) ft_memchr( argv[1], 'x', 20) ) != NULL)
      printf( "Es %s\n", result );
    else
      printf( "No está\n" );
  }
}*/