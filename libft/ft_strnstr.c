/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:18:28 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/04 20:45:09 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The strnstr() function locates the first occurrence of the
*	null-terminated string little in the string big, where not more
*	than len characters are searched. Characters that appear after a
*	‘\0’ character are not searched.
*
*	If little is an empty string, big is returned; if little occurs
*	nowhere in big, NULL is returned; otherwise a pointer to the first
*	character of the first occurrence of little is returned.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*result;
	size_t	lenlittle;

	result = (char *)big;
	lenlittle = ft_strlen(little);
	if (lenlittle == 0)
		return (result);
	while (*result && len >= lenlittle)
	{
		if (ft_strncmp(result, little, lenlittle) == 0)
			return (result);
		result++;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	big[] = "Hola que tal";
	const char	little[] = "";
	size_t		len;

	len = 12;
	printf("%s\n", ft_strnstr(big, little, len));
	printf("%s\n", strnstr(big, little, len));
	return (0);
}*/
