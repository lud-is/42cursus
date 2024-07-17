/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:48:05 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/18 19:12:03 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The strrchr() function locates the last occurrence
*	of c (converted to a char) in the string pointed to by s.
*	The terminating null character is considered to be part of the string;
*	therefore if c is ‘\0’, the function locates the terminating ‘\0’.
*
*	The function strrchr() returns a pointer to the located character,
*	or NULL if the character does not appear in the string.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*s2;
	char		ch;

	s2 = NULL;
	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			s2 = s;
		s++;
	}
	if (!ch)
		return ((char *)s);
	return ((char *)s2);
}
/*
int	main(void)
{
	const char	s[] = "Holaquetal";
	int			c;

	c = 'z';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}*/
