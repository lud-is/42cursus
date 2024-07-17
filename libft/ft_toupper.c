/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:56:27 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:36:35 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <ctype.h>
*
*	The toupper() function converts a lower-case letter to the
*	corresponding upper-case letter. The argument must be representable
*	as an unsigned char or the value of EOF.
*
*	If the argument is a lower-case letter, the toupper() function returns
*	the corresponding upper-case letter if there is one; otherwise,
*	the argument is returned unchanged.
*/

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = '*';
	printf("%c\n", ft_toupper(c));
	printf("%c\n", toupper(c));
	return (0);
}*/
