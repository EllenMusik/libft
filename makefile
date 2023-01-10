# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 14:11:49 by esteiner          #+#    #+#              #
#    Updated: 2023/01/10 17:00:41 by esteiner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRCFILES = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_bzero.c ft_atoi.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcat.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memchr.c
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