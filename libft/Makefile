# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 15:26:44 by lumetral          #+#    #+#              #
#    Updated: 2024/07/08 16:43:31 by lumetral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c \
	   ft_strtrim.c ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c \
	   ft_strlen.c ft_substr.c ft_calloc.c ft_itoa.c ft_putchar_fd.c \
	   ft_strdup.c ft_strmapi.c ft_tolower.c ft_isalnum.c ft_memchr.c \
	   ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c ft_isalpha.c \
	   ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_isascii.c \
	   ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c
INCS = libft.h
OBJS = ${SRCS:%.c=%.o}
LIBC = ar rcs
LIBR = ranlib
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

%.o: %.c ${INCS} Makefile
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
