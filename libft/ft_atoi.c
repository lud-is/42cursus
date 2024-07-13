/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:14:31 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/24 14:20:11 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Standard C Library
*	#include <stdlib.h>
*
*	The atoi() function converts the initial portion of the string
*	pointed to by str to int representation.
*/

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	negative;

	i = 0;
	number = 0;
	negative = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		number = -number;
	return (number);
}
/*
int	main(void)
{
	const char	str[] = "aaaa12";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}*/
