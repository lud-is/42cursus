/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:33:12 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/28 16:46:22 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (*s2)
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}
/*
int	main(void)
{
	char const	s1[] = "Hola ";
	char const	s2[] = "Mundito!";
	char		*s3;

	s3 = ft_strjoin(s1, s2);
	if (!s3)
		return (1);
	printf("%s\n", s3);
	free(s3);
	return (0);
}*/
