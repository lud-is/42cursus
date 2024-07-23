/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:10:57 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/18 19:08:50 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The strchr() function locates the first occurrence
*	of c (converted to a char) in the string pointed to by s.
*	The terminating null character is considered to be part of
*	the string; therefore if c is ‘\0’, the function locates
*	the terminating ‘\0’.
*
*	The function strchr() returns a pointer to the located character,
*	or NULL if the character does not appear in the string.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	char	*p;

	chr = (char)c;
	p = (char *)s;
	while (*p && *p != chr)
		p++;
	if (*p == chr)
		return (p);
	return (NULL);
}
/*
int	main(void)
{
	const char	s[] = "Hola";
	int			c;

	c = 'z';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}*/
