/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:53:39 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/24 14:36:53 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_format(va_list *ap, char format, int *count, int *error)
{
	if (format == 'c')
		print_char(va_arg(*ap, int), count, error);
	else if (format == 's')
		print_str(va_arg(*ap, char *), count, error);
	else if (format == 'd' || format == 'i')
		print_nbr(va_arg(*ap, int), count, error);
	else if (format == 'u')
		print_unsigned_nbr(va_arg(*ap, unsigned int), count, error);
	else if (format == 'x' || format == 'X')
		print_hex(va_arg(*ap, unsigned int), count, error, format);
	else if (format == 'p')
		print_pointer(va_arg(*ap, void *), count, error);
	else if (format == '%')
		print_char('%', count, error);
	else if (format == '\0')
		*error = -1;
	else
		print_char(format, count, error);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		error;

	count = 0;
	error = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
			print_format(&ap, *(++format), &count, &error);
		else
			print_char(*format, &count, &error);
		if (error == -1)
		{
			count = -1;
			break ;
		}
		++format;
	}
	va_end(ap);
	return (count);
}
