/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:53:44 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:23:24 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <ctype.h>
*
*	The isascii() function tests for an ASCII character, which is
*	any character between 0 and decimal 127 inclusive.
*/

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 128;
	printf("%c %d\n", c, ft_isascii(c));
	printf("%c %d\n", c, isascii(c));
	return (0);
}*/
