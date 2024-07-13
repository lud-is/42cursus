/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:15:25 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/24 14:21:34 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* 	Standard C Library
*	#include <string.h>
*
*	The strdup() function allocates sufficient memory for a copy
*	of the string s1, does the copy, and returns a pointer to it.
*	The pointer may subsequently be used as an argument to the
*	function free(3).
*
*	If insufficient memory is available, NULL is returned and errno is
*	set to ENOMEM.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	const char	s1[] = "Hola";
	char		*s2;

	s2 = ft_strdup(s1);
	if (!s2)
		return (1);
	printf("%s\n", s2);
	free(s2);
	s2 = strdup(s1);
	if (!s2)
		return (1);
	printf("%s\n", s2);
	free(s2);
	return (0);
}*/
