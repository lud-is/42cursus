/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:00:37 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/23 18:03:26 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(char *str, int *count, int *error)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		print_char(*str, count, error);
		if (*error == -1)
			break ;
		++str;
	}
}
