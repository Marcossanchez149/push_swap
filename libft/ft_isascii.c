/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:42:49 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/21 12:36:41 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int letter)
{
	if (letter >= 00 && letter <= 127)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
   int ch;
 
   for (ch = 0x7c; ch <= 0x82; ch++) {
      printf("%#04x    ", ch);
      if (ft_isascii(ch))
         printf("Es: %c\n", ch);
      else
         printf("No es ASCII\n");
   }
   return 0;
}*/