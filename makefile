# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 14:11:49 by esteiner          #+#    #+#              #
#    Updated: 2022/12/19 16:16:28 by esteiner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRCFILES = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_bzero.c ft_atoi.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c
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