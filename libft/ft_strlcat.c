/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:02:51 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:15:27 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//concatenate two strings and returns the size including \0
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	i;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(((char *)src));
	if (size <= londst)
		return (lonsrc + size);
	i = londst;
	while (*src != '\0' && i < (size - 1))
		*(dst + i++) = *src++;
	*(dst + i) = '\0';
	return (londst + lonsrc);
}

/*
int main()
{
    char first[] = "This is ";
    char last[] = "a long string";
    int r;
    int size = 64;
    char buffer[size];

    ft_strlcpy(buffer,first,size);
	puts(buffer);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/