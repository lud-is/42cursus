/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:26:23 by lumetral          #+#    #+#             */
/*   Updated: 2024/08/27 10:28:38 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# if BUFFER_SIZE > 2147483646
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 2147483646
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *stock, char *buffer);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *stock, int c);
char	*ft_substr(const char *stock, size_t start, size_t len);
char	*extract_line(char **stock);
char	*ft_fill_stock(int fd, char *stock);
char	*get_next_line(int fd);

#endif
