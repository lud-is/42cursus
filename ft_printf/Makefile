# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumetral <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 19:49:42 by lumetral          #+#    #+#              #
#    Updated: 2024/07/24 14:40:49 by lumetral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####################################
## VARIABLES ##

NAME = libftprintf.a
SRCS = print_char.c print_str.c \
	   print_nbr.c print_unsigned_nbr.c \
	   print_hex.c print_pointer.c \
	   ft_printf.c
INCS = ft_printf.h
OBJS = ${SRCS:%.c=%.o}
LIBC = ar rcs
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

##################################
## RULES ##

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c ${INCS} Makefile
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
