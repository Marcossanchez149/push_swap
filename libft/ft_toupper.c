/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 09:52:25 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 12:39:20 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>

int main()
{
    int j = 0;
    char str[] = "geekfoQrgeV6eks\n";
    char ch;

    while (str[j]) {
        ch = str[j];
        putchar(ft_toupper(ch));
        j++;
    }

    return 0;
}*/