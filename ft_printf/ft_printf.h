/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:48:51 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/24 14:48:16 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	print_char(int c, int *count, int *error);
void	print_str(char *str, int *count, int *error);
void	print_nbr(int nbr, int *count, int *error);
void	print_unsigned_nbr(unsigned int nbr, int *count, int *error);
void	print_hex(unsigned int nbr, int *count, int *error, char format);
void	print_pointer(void *ptr, int *count, int *error);

#endif
