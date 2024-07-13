/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:04:00 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/04 16:50:50 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The strlcpy() function copies strings. It takes the full size
*	of the buffer (not just the length) and guarantees to NUL-terminate
*	the result (as long as size is larger than 0).
*	Note that a byte for the NUL should be included in size.
*	Also note that strlcpy() only operates on true “C” strings. This means
*	that src must be NUL-terminated.
*
*	The strlcpy() function copies up to size - 1 characters from the
*	NUL-terminated string src to dst, NUL-terminating the result.
*
*	The strlcpy() function returns the total length of the
*	string it tried to create. That means the length of src.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	while (src[i] != 0 && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
int	main(void)
{
	const char	src[] = "Holaaaaaaab";
	char		dst[50];
	size_t		size;

	size = sizeof(src);
	printf("%zu\n", size);
	printf("%zu\n", ft_strlcpy(dst, src, size));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst, src, size));
	printf("%s\n", dst);
	return (0);
}*/
