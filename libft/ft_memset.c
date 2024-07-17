/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:56:44 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:31:16 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The memset() function writes len bytes of value c (converted to
*	an unsigned char) to the string b.
*
*	The memset() function returns its first argument.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = b;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	b[10];
	int		c;
	size_t	len;

	c = 'z';
	len = 4;
	ft_memset(b, c, len);
	printf("%s\n", b);
	memset(b, c, len);
	printf("%s\n", b);
	return (0);
}*/
