/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:43:20 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/21 12:40:20 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int letter)
{
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
 
int main()
{
   char cadena[] = ";0ñfáR(4h&~?RÛ1/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], ft_isdigit(cadena[i]));

   return 0;
}*/