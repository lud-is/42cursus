/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:40:43 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/26 16:03:34 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The strlcat() function concatenates strings.
*	It takes the full size of the buffer (not just the length)
*	and guarantees to NUL-terminate the result (as long as there
*	is at least one byte free in dst). Note that a byte for the NUL
*	should be included in size. Also note that strlcat() only operates
*	on true “C” strings. This means that both src and dst
*	must be NUL-terminated.
*
*	The strlcat() function appends the NUL-terminated string src to
*	the end of dst. It will append at most size - strlen(dst) - 1 bytes,
*	NUL-terminating the result.
*
*	It returns the total length of the string it tried to create.
*	It means the initial length of dst plus the length of src.
*	While this may seem somewhat confusing, it was done to make
*	truncation detection simple.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] && (dstlen + i < size - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
int	main(void)
{
	const char	src[] = " Mundoooo";
	char		dst[8] = "Hola";
	const char	src2[] = " Mundoooo";
	char		dst2[8] = "Hola";
	size_t		size;

	size = sizeof(dst);
	printf("size: %zu\n", size);
	printf("return custom: %zu\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
	printf("return official: %zu\n", strlcat(dst2, src2, size));
	printf("%s\n", dst2);
	return (0);
}*/
