/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:00:10 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/23 18:19:17 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_nbr(int nbr, int *count, int *error)
{
	if (nbr == -2147483648)
		print_str("-2147483648", count, error);
	else if (nbr < 0)
	{
		print_char('-', count, error);
		nbr = -nbr;
		print_nbr(nbr, count, error);
	}
	else if (nbr > 9)
	{
		print_nbr(nbr / 10, count, error);
		print_nbr(nbr % 10, count, error);
	}
	else
		print_char(nbr + '0', count, error);
}
