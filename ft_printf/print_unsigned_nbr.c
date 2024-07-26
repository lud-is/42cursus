/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:59:46 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/23 18:03:42 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_unsigned_nbr(unsigned int nbr, int *count, int *error)
{
	if (nbr > 9)
	{
		print_unsigned_nbr(nbr / 10, count, error);
		print_unsigned_nbr(nbr % 10, count, error);
	}
	else
		print_char(nbr + '0', count, error);
}
