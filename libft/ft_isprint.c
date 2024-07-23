/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:53:59 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:26:43 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <ctype.h>
*
*	The isprint() function tests for any printing character,
*	including space (‘ ’). The value of the argument must be
*	representable as an unsigned char or the value of EOF.
*
*	The isprint() function returns zero if the character tests
*	false and returns non-zero if the character tests true.
*/

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 42;
	printf("%c %d\n", c, ft_isprint(c));
	printf("%c %d\n", c, isprint(c));
	return (0);
}*/
