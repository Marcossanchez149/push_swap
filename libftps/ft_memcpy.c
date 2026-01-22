/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:15:11 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:10:56 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copy src in dest based on size n
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;	

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	i = 0 ;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main() {

	int a = 20;
	int b = 10;
	
	printf("Valor antes: %d\n", b);

	ft_memcpy(&b, &a, sizeof(int)); 

	printf("Valor despues: %d\n", b);

	char str1[] = "Geeks";
	char str2[6] = "";

	ft_memcpy(str2, str1, sizeof(str1));

	printf("str2 after:");
	printf("%s\n",str2);

	return 0;
}*/
