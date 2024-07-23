/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:33:49 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/22 21:28:10 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexlower(unsigned int nbr)
{
	int		count;
	char	*base_lower;

	count = 0;
	base_lower = "0123456789abcdef";
	if (nbr >= 16)
		count = print_hexlower(nbr / 16);
	count += print_char(base_lower[nbr % 16]);
	return (count);
}
