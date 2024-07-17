/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:55:48 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:25:08 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <ctype.h>
*
*	The isdigit() function tests for a decimal digit
*	character (from '0' to '9'). The value of the argument must be
*	representable as an unsigned char or the value of EOF.
*
*	The isdigit() function returns zero if the character tests false and
*	returns non-zero if the character tests true.
*/

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '5';
	printf("%c %d\n", c, ft_isdigit(c));
	printf("%c %d\n", c, isdigit(c));
	return (0);
}*/
