/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:52:48 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/21 21:15:26 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <strings.h>
*
*	The bzero() function writes n zeroed bytes to the string s.
*	If n is zero, bzero() does nothing.
*/

#include "libft.h"
//#include <stdio.h>
//#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "Hola";
	size_t		n;
	size_t		i;

	n = 2;
	i = 0;
	ft_bzero(s, n);
	//bzero(s, n);
	while (i < sizeof(s))
	{
		printf("%c", s[i]);
		i++;
	}
	return (0);
}*/
