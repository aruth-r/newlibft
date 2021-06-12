# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/29 18:59:40 by aruth-ra          #+#    #+#              #
#    Updated: 2021/06/12 00:16:20 by aruth-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs

HEADERS = libft.h

FILES		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
		  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
		  ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		  ft_strtrim.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
		  ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_split.c


.c.o:
			$(CC) $(CFLAGS) $(HEADERS) -c $< -o $(<:.c=.o)

OBJECTS		= $(FILES:.c=.o)

$(NAME):
				@$(CC) $(CFLAGS) -c $(FILES)
				@$(AR) $(NAME) $(OBJECTS)
				@echo "[INFO] Libray [$(NAME)] created!"

all:		$(NAME)

clean:
			@$(RM) $(OBJECTS)
			@echo "Clean"

fclean:		clean
			@$(RM) $(NAME)
			@echo "Library removed"

re:			fclean all

.PHONY: all clean fclean re
