/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:57:41 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/23 18:03:14 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hexpointer(unsigned long nbr, int *count, int *error)
{
	char	*base_lower;

	base_lower = "0123456789abcdef";
	if (nbr >= 16)
		print_hexpointer(nbr / 16, count, error);
	print_char(base_lower[nbr % 16], count, error);
}

void	print_pointer(void *ptr, int *count, int *error)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	if (!address)
		print_str("(nil)", count, error);
	else
	{
		print_str("0x", count, error);
		print_hexpointer(address, count, error);
	}
}
