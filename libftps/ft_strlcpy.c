/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:57:14 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/12 14:15:56 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i +1 < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	if (n != 0)
	{
		s1[i] = '\0';
	}
	return (ft_strlen(s2));
}

/*
#include <stdio.h> 

int main()
{
	char dest_str[] = "Prueba a cambiar"; 
	char src_str[] = "Ha sido cambiado";
	int resultado;
	resultado = ft_strlcpy(dest_str,src_str,10);
	printf(dest_str);
	return(resultado);
}*/