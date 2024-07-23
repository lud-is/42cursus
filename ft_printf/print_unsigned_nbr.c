/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:33:21 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/22 21:32:19 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_nbr(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count = print_unsigned_nbr(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}
