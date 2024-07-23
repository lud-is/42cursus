/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:32:55 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/22 21:29:30 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (nbr < 0)
	{
		count = print_char('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		count += print_nbr(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}
