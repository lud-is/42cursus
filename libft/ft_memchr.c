/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:41:59 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:28:03 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
* 
*	The  memchr() function  scans  the initial n bytes of the memory
*	area pointed to by s for the first instance of c. Both c and the
*	bytes of the memory area pointed to by s are interpreted as
*	unsigned char.
* 
*	The memchr() function returns a pointer to the matching byte or NULL
*	if the character does not occur in the given memory area.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s2;
	unsigned char		c2;
	size_t				i;

	s2 = (const unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s2[i] == c2)
			return ((void *)(s2 + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	s[] = "Holaa\0aabaaaaa";
	int	c;
	size_t	n;

	c = 'H';
	n = 10;
	printf("%s\n", (char *)memchr(s, c, n));
	printf("%s\n", (char *)ft_memchr(s, c, n));
	return (0);
}*/
