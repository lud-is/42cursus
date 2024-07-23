/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:48:51 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/19 13:30:03 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_format(va_list *ap, char specifier);
int	print_char(int specifier);
int	print_str(char *str);
int	print_nbr(int nbr);
int	print_unsigned_nbr(unsigned int nbr);
int	print_hexlower(unsigned int nbr);
int	print_hexupper(unsigned int nbr);
int	print_hexpointer(unsigned long nbr);
int	print_pointer(void *ptr);

#endif
