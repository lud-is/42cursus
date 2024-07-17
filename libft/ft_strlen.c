/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:56:52 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/04 16:55:15 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <string.h>
*
*	The strlen() function computes the length of the string s.
*
*	The strlen() function returns the number of characters that
*	precede the terminating NUL character.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	const char	s[] = "Hello";

	printf("%zu\n", ft_strlen(s));
	printf("%zu\n", strlen(s));
	return (0);
}*/
