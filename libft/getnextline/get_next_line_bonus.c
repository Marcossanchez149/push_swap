/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:09:28 by marcsan2          #+#    #+#             */
/*   Updated: 2025/11/23 13:16:35 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	find_end_line(char *buffer)
{
	int	i;

	i = 0;
	if (!buffer)
		return (-1);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (-1);
	return (i);
}

char	*create_line_saved(char **save, int end_line)
{
	char		*line;
	char		*temp;

	if (!save || !*save)
		return (NULL);
	line = malloc(end_line + 2);
	if (!line)
		return (NULL);
	ft_strlcpy(line, *save, end_line + 2);
	temp = ft_strdup(*save + end_line + 1);
	free(*save);
	*save = temp;
	return (line);
}

int	reading_loop(int fd, char *buffer, char **save)
{
	char		*temp;
	int			bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (!*save)
			*save = ft_strdup(buffer);
		else
		{
			temp = ft_strjoin(*save, buffer);
			if (!temp)
				return (-1);
			free(*save);
			*save = temp;
		}
		if (!*save)
			return (-1);
		if (find_end_line(*save) >= 0)
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	return (bytes_read);
}

char	*check_final_line(char **save)
{
	int			end_line;
	char		*line;
	char		*temp;

	if (!save || !*save || !**save)
		return (NULL);
	end_line = find_end_line(*save);
	if (end_line >= 0)
	{
		line = malloc(end_line + 2);
		if (!line)
			return (NULL);
		ft_strlcpy(line, *save, end_line + 2);
		temp = ft_strdup(*save + end_line + 1);
		free(*save);
		*save = temp;
	}
	else
	{
		line = ft_strdup(*save);
		free(*save);
		*save = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*save[1024];
	int			end_line;
	char		*buffer;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= 1024)
		return (NULL);
	if (save[fd])
	{
		end_line = find_end_line(save[fd]);
		if (end_line >= 0)
			return (create_line_saved(&save[fd], end_line));
	}
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (reading_loop(fd, buffer, &save[fd]) < 0 || !save[fd] || !*save[fd])
	{
		free(save[fd]);
		save[fd] = NULL;
		free(buffer);
		return (NULL);
	}
	free(buffer);
	return (check_final_line(&save[fd]));
}
