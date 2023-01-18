# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 14:11:49 by esteiner          #+#    #+#              #
#    Updated: 2023/01/17 20:54:58 by esteiner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRCFILES = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_bzero.c ft_atoi.c ft_isascii.c ft_isprint.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcat.c\
ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c ft_strmapi.c ft_itoa.c ft_striteri.c
OBJFILES = $(SRCFILES:.c=.o)


all: $(NAME)
$(NAME): $(OBJFILES)
	ar -rcs $(NAME) $(OBJFILES)
$(SRCFILES):
	cc $(CFLAGS) $(NAME) $(SRCFILES)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re