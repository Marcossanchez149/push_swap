/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 10:22:28 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:12:54 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Search for first aparition of c in s and return a pointer to that
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	ssize;

	ssize = ft_strlen(s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return (&((char *)s)[i]);
		}
		i ++;
	}
	if ((char)c == 0)
		return (&((char *)s)[i]);
	return (0);
}

/*
#include <stdio.h> 
 
int main(void)
{
  char buffer1[40] = "computer program";
  char * ptr;
  int    ch = 'a';
 
  ptr = ft_strchr( buffer1, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
 
}*/