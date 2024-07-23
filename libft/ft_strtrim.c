/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:21:40 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/08 16:37:12 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*strtrim;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strtrim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!strtrim)
		return (NULL);
	while (start < end)
		strtrim[i++] = s1[start++];
	strtrim[i] = '\0';
	return (strtrim);
}
/*
int main(void)
{
	char const  *s1 = "Hola mundito que tal????";
	char const  *set = "?Hio";
	char        *strtrim;
	
	strtrim = ft_strtrim(s1, set);
	if (!strtrim)
		return (1);
	printf("%s\n", strtrim);
	free(strtrim);
	return (0);
}*/
