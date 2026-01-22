/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:52:29 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:07:05 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Everithing to null
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		++i;
	}
}

/*
#include<stdio.h>
int main(void)
{
char buffer[20]="Esto es un test"; printf("Antes: %s\n",buffer); 
ft_bzero(buffer, 20);
printf("Despues: %s", buffer);
return (0)
}*/