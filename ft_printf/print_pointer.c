/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:34:50 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/22 21:31:16 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexpointer(unsigned long nbr)
{
	int		count;
	char	*base_lower;

	count = 0;
	base_lower = "0123456789abcdef";
	if (nbr >= 16)
		count = print_hexpointer(nbr / 16);
	count += print_char(base_lower[nbr % 16]);
	return (count);
}

int	print_pointer(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	if (!address)
		count = print_str("(nil)");
	else
	{
		count = print_str("0x");
		count += print_hexpointer(address);
	}
	return (count);
}
