/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:34:12 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/22 21:28:59 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexupper(unsigned int nbr)
{
	int		count;
	char	*base_upper;

	count = 0;
	base_upper = "0123456789ABCDEF";
	if (nbr >= 16)
		count = print_hexupper(nbr / 16);
	count += print_char(base_upper[nbr % 16]);
	return (count);
}
