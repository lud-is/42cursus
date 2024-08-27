/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:30:31 by lumetral          #+#    #+#             */
/*   Updated: 2024/08/23 09:33:50 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*extract_line(char **stock)
{
	size_t		len;
	char		*line;
	char		*new_stock;

	len = 0;
	while ((*stock)[len] && (*stock)[len] != '\n')
		len++;
	line = ft_substr(*stock, 0, len + ((*stock)[len] == '\n'));
	if (!line)
		return (NULL);
	if ((*stock)[len] == '\n')
		new_stock = ft_strdup(*stock + len + 1);
	else
		new_stock = NULL;
	free(*stock);
	*stock = new_stock;
	return (line);
}

char	*ft_fill_stock(int fd, char *stock)
{
	char	*buffer;
	ssize_t	bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (stock)
			stock = ft_strjoin(stock, buffer);
		else
			stock = ft_strdup(buffer);
		if (!stock)
			return (free(buffer), NULL);
		if (ft_strchr(stock, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (bytes_read < 0)
		return (NULL);
	return (stock);
}

char	*get_next_line(int fd)
{
	static char	*stock[FD_MAX] = {NULL};
	char		*line;

	if (fd < 0 || fd >= FD_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	stock[fd] = ft_fill_stock(fd, stock[fd]);
	if (!stock[fd] || stock[fd][0] == '\0')
	{
		free(stock[fd]);
		stock[fd] = NULL;
		return (NULL);
	}
	line = extract_line(&stock[fd]);
	return (line);
}
