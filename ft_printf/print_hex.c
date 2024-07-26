/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:59:05 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/24 14:48:02 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(unsigned int nbr, int *count, int *error, char format)
{
	char	*base_lower;
	char	*base_upper;

	base_lower = "0123456789abcdef";
	base_upper = "0123456789ABCDEF";
	if (nbr >= 16)
		print_hex(nbr / 16, count, error, format);
	if (format == 'x')
		print_char(base_lower[nbr % 16], count, error);
	if (format == 'X')
		print_char(base_upper[nbr % 16], count, error);
}
