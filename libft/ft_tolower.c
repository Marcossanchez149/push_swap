/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 10:00:57 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 12:40:19 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>

int main()
{
    int j = 0;
    char str[] = "ESTOes5UNAp57ryubea\n";
    char ch;

    while (str[j]) {
        ch = str[j];
        putchar(ft_tolower(ch));
        j++;
    }

    return 0;
}*/