/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:18:06 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:29:14 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The memcpy() function copies n bytes from memory area src
*	to memory area dst. If dst and src overlap, behavior is undefined.
*	Applications in which dst and src might overlap should use
*	memmove(3) instead.
*
*	The memcpy() function returns the original value of dst.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	const char	*src = "Hola";
	char		dst[20];
	size_t		n;

	n = 2;
	ft_memcpy(dst, src, n);
	printf("%s\n", dst);
	memcpy(dst, src, n);
	printf("%s\n", dst);
	return (0);
}*/
