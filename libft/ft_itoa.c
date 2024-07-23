/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:34:18 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/08 15:10:46 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

static int	n_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		length = length + 1;
		n = n / 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		length;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = n_length(n);
	string = ft_calloc((size_t)(length + 1), sizeof(char));
	if (!string)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		string[--length] = (n % 10) + '0';
		n = n / 10;
	}
	return (string);
}
/*
int	main(void)
{
	char	*string;
	int		n;

	//n = -2147483648;
	//n = 2147483647;
	//n = 0;
	n = 100;
	//n = -42;
	string = ft_itoa(n);
	if (!string)
		return (1);
	printf("%s\n", string);
	free(string);
	return (0);
}*/
