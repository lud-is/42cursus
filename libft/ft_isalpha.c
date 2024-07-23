/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:54:40 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:21:58 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <ctype.h>
*
*	The isalpha() function tests for any character for which isupper(3) or
*	islower(3) is true.  The value of the argument must be representable as
*	an unsigned char or the value of EOF.
*
*	The isalpha() function returns zero if the character tests false and
*	returns non-zero if the character tests true.
*/

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 'G';
	printf("%c %d\n", c, ft_isalpha(c));
	printf("%c %d\n", c, isalpha(c));
	return (0);
}*/
