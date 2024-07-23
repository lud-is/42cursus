/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:59:05 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/23 18:02:48 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexlower(unsigned int nbr, int *count, int *error)
{
	char	*base_lower;

	base_lower = "0123456789abcdef";
	if (nbr >= 16)
		print_hexlower(nbr / 16, count, error);
	print_char(base_lower[nbr % 16], count, error);
}
