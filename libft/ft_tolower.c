/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:54:12 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:35:11 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <ctype.h>
*
*	The tolower() function converts an upper-case letter to the
*	corresponding lower-case letter. The argument must be representable
*	as an unsigned char or the value of EOF.
*
*	If the argument is an upper-case letter, the tolower() function
*	returns the corresponding lower-case letter if there is one; otherwise,
*	the argument is returned unchanged.
*/

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = '*';
	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));
	return (0);
}*/
