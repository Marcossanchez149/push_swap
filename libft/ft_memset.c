/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:18:38 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:11:44 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Dest is filled with c count number of times 
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*p;

	p = dest;
	while (count--)
	{
		*p++ = (unsigned char)c;
	}
	return (dest);
}
