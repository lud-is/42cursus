/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:53:58 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/22 21:38:46 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

/*
*	The function printf() writes output to stdout, the standard
*	output stream.
*	All of these functions write the output under the control of
*	a format string that specifies how subsequent arguments are
*	converted for output.
*
*	Upon successful return, printf returns the number of characters
* 	printed (excluding the null byte used to end output to strings).
* 	If an output error is encountered, a negative value is returned.
*/

int	print_format(va_list *ap, char specifier)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = print_char(va_arg(*ap, int));
	else if (specifier == 's')
		count = print_str(va_arg(*ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count = print_nbr(va_arg(*ap, int));
	else if (specifier == 'u')
		count = print_unsigned_nbr(va_arg(*ap, unsigned int));
	else if (specifier == 'x')
		count = print_hexlower(va_arg(*ap, unsigned int));
	else if (specifier == 'X')
		count = print_hexupper(va_arg(*ap, unsigned int));
	else if (specifier == 'p')
		count = print_pointer(va_arg(*ap, void *));
	else if (specifier == '%')
		count = print_char('%');
	else
		count = write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;
			if (*format == '\0')
				break ;
			else
				count += print_format(&ap, *format);
		}
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
/*
int	main(void)
{
	int	count;
	int	value = 38;
	int	*ptr = &value;
	int	*nullptr = NULL;
	char	*str = "Grenoble";
	char	*nullstr = NULL;
	int	i = -2147483648;
	int	d = 2147483647;
	unsigned int	u = 4294967295;
	char	c = 'C';
	unsigned int	x = -100;
	unsigned int	X = -100;

	ft_printf("Custom printf:\n");
	count = ft_printf("Conversions are great! %s %s %i %d %u %c %x %X %p %p %%\n",
			str, nullstr, i, d, u, c, x, X, ptr, nullptr);
	ft_printf("Return value: %d\n\n", count);
	printf("Official printf:\n");
	count = printf("Conversions are great! %s %s %i %d %u %c %x %X %p %p %%\n",
			str, nullstr, i, d, u, c, x, X, ptr, nullptr);
	printf("Return value: %d\n", count);
	return (0);
}*/
