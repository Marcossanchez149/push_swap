/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:37:53 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:13:24 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Creates a new memory space and copy everithing in the  pointer
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*punt;
	int		size;

	size = ft_strlen(s)+1;
	punt = malloc(size);
	if (!punt)
		return (NULL);
	ft_strlcpy(punt, s, size);
	return (punt);
}

/*
#include <stdio.h>
int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   if ((newstr = ft_strdup(string)) != NULL)
      printf("The new string is: %s\n", newstr);
	free(newstr);
   return 0;
}*/