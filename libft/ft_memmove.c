/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:14:36 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/11 12:33:30 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The memmove() function copies n bytes from memory area
*	src to memory area dest. The memory areas may overlap: copying
*	takes place as though the bytes in src are first copied into a
*	temporary array that does not overlap src or dest, and the bytes
*	are then copied from the temporary array to dest.
*
*	The memmove() function returns a pointer to dest.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	return (dest);
}
/*
int	main(void)
{
	char		dest[20] = "que tal";
	const char	*src = "abcdefghi";
	size_t		n;

	n = 8;
	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	memmove(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
