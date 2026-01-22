/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:43:45 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/02 15:37:51 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char letter)
{
	if (ft_isalpha(letter) == 1 || ft_isdigit(letter) == 1)
		return (1);
	return (0);
}

/*
#include <stdio.h>
  
int main(void)
{
	printf("%3s ", ft_isalnum(1)  ? "SI" : "NO");
	printf("%3s ", ft_isalnum('G')  ? "SI" : "NO");
	printf("%3s ", ft_isalnum(4)  ? "SI" : "NO");
	printf("%3s ", ft_isalnum('@')  ? "SI" : "NO");
}*/