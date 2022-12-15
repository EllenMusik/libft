NAME= libft.h
CFLAGS= -Wall -Werror -Wextra
OBJFILES= *.o
SRCFILES= ft_*.c

$(NAME): $(OBJFILES)
	ar -r 
all: $(SRCFILES)
	cc -c $(CFLAGS) $(SRCFILES)
clean:

fclean:

re: