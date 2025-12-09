/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:59:24 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:18:05 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a substring from start of s to len
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, ((char *)s) + start, finish + 1);
	return (new);
}

/*
#include <stdio.h> 
int main(void)
{
	char	*resultado;
	
	resultado = ft_substr("Hola que tal estas",2,4);
	printf(resultado);
	free(resultado);
}*/