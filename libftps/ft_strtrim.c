/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:11:38 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:17:51 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Receive two strings, one is the letters that must be removed from the other
#include "libft.h"

static int	check_letter(char letra, char const *set)
{
	int		errase;
	int		contset;

	contset = 0;
	errase = 0;
	while (set[contset] != '\0')
	{
		if (set[contset] == letra)
			errase = 1;
		contset ++;
	}
	return (errase);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && check_letter(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_letter(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

/*
#include <stdio.h>
int main() {
	const char *s = "hola mundo";
	const char *chars = "mun";

	char *res = ft_strtrim(s, chars);
	printf("Original: %s\n", s);
	printf("Sin '%s': %s\n", chars, res);

	free(res);
	return 0;
}*/