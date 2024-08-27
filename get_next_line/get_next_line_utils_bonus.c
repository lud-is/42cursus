/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:39:46 by lumetral          #+#    #+#             */
/*   Updated: 2024/08/23 09:40:54 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char *stock, char *buffer)
{
	char	*new_stock;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	len1 = ft_strlen(stock);
	len2 = ft_strlen(buffer);
	new_stock = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_stock)
		return (free(stock), NULL);
	i = 0;
	while (i < len1)
	{
		new_stock[i] = stock[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		new_stock[len1 + j] = buffer[j];
		j++;
	}
	new_stock[len1 + len2] = '\0';
	return (free(stock), new_stock);
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*new_str;

	len = ft_strlen(str);
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}

char	*ft_strchr(const char *stock, int c)
{
	if ((char)c == '\0')
		return ((char *)stock);
	while (*stock)
	{
		if (*stock == (char)c)
			return ((char *)stock);
		stock++;
	}
	return (NULL);
}

char	*ft_substr(const char *stock, size_t start, size_t len)
{
	size_t	line_len;
	size_t	i;
	size_t	stock_len;
	char	*line;

	stock_len = ft_strlen(stock);
	if (start >= stock_len)
		return (ft_strdup(""));
	line_len = stock_len - start;
	if (line_len > len)
		line_len = len;
	line = malloc(line_len + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < line_len)
	{
		line[i] = stock[start + i];
		i++;
	}
	line[line_len] = '\0';
	return (line);
}
