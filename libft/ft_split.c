/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:16:52 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/12 12:10:33 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

static char	**ft_free(char **array)
{
	unsigned int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (NULL);
}

static int	ft_words_number(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (words);
}

static char	*ft_substring(char const *s, char c, int *index)
{
	char	*array;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[*index] == c)
		(*index)++;
	i = *index;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (s[*index] && s[*index] != c)
		array[i++] = s[(*index)++];
	array[i] = '\0';
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		index;
	int		words;
	int		i;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	words = ft_words_number(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (i < words)
	{
		array[i] = ft_substring(s, c, &index);
		if (!array[i])
			return (ft_free(array));
		i++;
	}
	array[i] = NULL;
	return (array);
}
/*
int	main(void)
{
	char const	s[] = "    Hola   que   tal   el    dia         ";
	char		c;
	size_t		i;
	char		**array;

	c = ' ';
	i = 0;
	array = ft_split(s, c);
	if (array)
	{
		while (array[i])
		{
			printf("%s\n", array[i]);
			free(array[i]);
			i++;
		}
		free(array);
	}
	return (0);
}*/
