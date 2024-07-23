/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:58:29 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/23 18:03:01 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexupper(unsigned int nbr, int *count, int *error)
{
	char	*base_upper;

	base_upper = "0123456789ABCDEF";
	if (nbr >= 16)
		print_hexupper(nbr / 16, count, error);
	print_char(base_upper[nbr % 16], count, error);
}
