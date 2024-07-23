/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:53:01 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:19:46 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <ctype.h>
*
*	The isalnum() function tests for any character for which isalpha(3)
*	or isdigit(3) is true. The value of the argument must be representable
*	as an unsigned char or the value of EOF.
*
*	The isalnum() function returns zero if the character tests false
*	and returns non-zero if the character tests true.
*/

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '?';
	printf("%c %d\n", c, ft_isalnum(c));
	printf("%c %d\n", c, isalnum(c));
	return (0);
}*/
