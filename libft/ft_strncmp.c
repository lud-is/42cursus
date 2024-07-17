/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:17:32 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/04 20:45:52 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The strncmp() function lexicographically compares
*	the null-terminated strings s1 and s2.
*	The strncmp() function compares not more than n characters.
*	Because strncmp() is designed for comparing strings rather
*	than binary data, characters that appear after a ‘\0’ character
*	are not compared.
*
*	The strncmp() function returns an integer greater than, equal to,
*	or less than 0, according as the string s1 is greater than, equal to,
*	or less than the string s2. The comparison is done using unsigned
*	characters, so that ‘\200’ is greater than ‘\0’.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*string1 && *string2 && *string1 == *string2 && i < n)
	{
		i++;
		string1++;
		string2++;
	}
	if (i == n)
		return (0);
	return (*string1 - *string2);
}
/*
int	main(void)
{
	const char	s1[] = "Hola";
	const char	s2[] = "Holaaaaaaab";
	size_t		n;

	n = 50;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
	return (0);
}*/
