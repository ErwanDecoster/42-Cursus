/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <edecoste@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:29:22 by edecoste          #+#    #+#             */
/*   Updated: 2022/12/08 11:20:52 by edecoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_join_to_buffer(char *buffer, char *read);
static char	*read_file(int fd, char *buffer, size_t i);
static char	*ft_get_left(char *buffer);
static char	*ft_get_right(char *buffer);

static char	*ft_join_to_buffer(char *buffer, char *read)
{
	char	*join;

	join = ft_strjoin(buffer, read);
	if (!join)
		return (free(buffer), buffer = NULL, NULL);
	free(buffer);
	return (join);
}

static char	*read_file(int fd, char *buffer, size_t i)
{
	char	*content;
	ssize_t	byte_count;

	content = (char *) malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!content)
		return (free(buffer), buffer = NULL, NULL);
	byte_count = 1;
	while (byte_count > 0)
	{
		byte_count = read(fd, content, BUFFER_SIZE);
		if (byte_count == -1)
			return (free(content), free(buffer), content = NULL, NULL); //fre buff
		content[byte_count] = 0;
		buffer = ft_join_to_buffer(buffer, content);
		if (!buffer)
			break ;
		i = 0;
		while (buffer[i] && buffer[i] != '\n')
			i++;
		if (buffer[i] && buffer[i] == '\n')
			break ;
	}
	return (free(content), content = NULL, buffer);
}

static char	*ft_get_left(char *buffer)
{
	char	*line;
	size_t	i;

	i = 0;
	if (!buffer[i])
		return (0);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_substr(buffer, 0, i + 1);
	if (!line)
		return (0);
	return (line);
}

static char	*ft_get_right(char *buffer)
{
	size_t	i;
	char	*remaining;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i] && buffer)
		return (free(buffer), NULL);
	remaining = ft_substr(buffer, i + 1, ft_strlen(buffer) - i);
	if (!remaining)
		return (free(buffer), buffer = NULL, NULL);
	return (free(buffer), buffer = NULL, remaining);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd == -1 || BUFFER_SIZE <= 0)
	{
		if (buffer)
			free(buffer);
		return (buffer = NULL, NULL);
	}
	buffer = read_file(fd, buffer, 0);
	if (!buffer)
		return (free(buffer), buffer = NULL, NULL);
	line = ft_get_left(buffer);
	buffer = ft_get_right(buffer);
	if (!line)
	{
		free(buffer);
		buffer = NULL;
	}
	return (line);
}
